#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

void make_key(char *key, char m[5][5]) {
    int used[26]={0},r=0,c=0;
    for(int pass=0;pass<2;pass++){
        const char *p=pass?"abcdefghijklmnopqrstuvwxyz":key;
        for(;*p;p++){int x=tolower((unsigned char)*p)-'a'; if(x<0||x>25)continue;if(x==9)x=8;if(used[x])continue;used[x]=1;m[r][c++]=(char)('a'+x);if(c==5)c=0,r++;}
    }
}
void pos(char m[5][5],char x,int *r,int *c){if(x=='j')x='i';for(int i=0;i<5;i++)for(int j=0;j<5;j++)if(m[i][j]==x){*r=i;*c=j;return;}}
int main(void){
 char key[100],in[1000],p[1000],out[2000];char m[5][5];int n=0;
 printf("Keyword: ");scanf("%99s",key);getchar();printf("Plaintext: ");fgets(in,sizeof in,stdin);clean_letters(in,p);
 for(int i=0;p[i];){char a=p[i++],b=p[i]?p[i++]:'x';if(a==b){b='x';i--;}out[n++]=a;out[n++]=b;}
 if(n%2){out[n++]='x';}out[n]=0;make_key(key,m);
 for(int i=0;i<n;i+=2){int r1,c1,r2,c2;pos(m,out[i],&r1,&c1);pos(m,out[i+1],&r2,&c2);
 if(r1==r2){out[i]=m[r1][(c1+1)%5];out[i+1]=m[r2][(c2+1)%5];}
 else if(c1==c2){out[i]=m[(r1+1)%5][c1];out[i+1]=m[(r2+1)%5][c2];}
 else{out[i]=m[r1][c2];out[i+1]=m[r2][c1];}}
 printf("Ciphertext: %s\nKey square:\n",out);for(int i=0;i<5;i++){for(int j=0;j<5;j++)printf("%c ",m[i][j]);puts("");}return 0;
}
