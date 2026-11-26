#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){char s[]="mustseeyouovercadoganwestcomingatonce";char m[5][5]={{'m','f','h','i','k'},{'u','n','o','p','q'},{'z','v','w','x','y'},{'e','l','a','r','g'},{'d','s','t','b','c'}};char out[200];int n=0;
 for(int i=0;s[i];){char a=s[i++],b=s[i]?s[i++]:'x';if(a==b){b='x';i--;}int r1=0,c1=0,r2=0,c2=0;for(int r=0;r<5;r++)for(int c=0;c<5;c++){if(m[r][c]==a)r1=r,c1=c;if(m[r][c]==b)r2=r,c2=c;}
 if(r1==r2)out[n++]=m[r1][(c1+1)%5],out[n++]=m[r2][(c2+1)%5];else if(c1==c2)out[n++]=m[(r1+1)%5][c1],out[n++]=m[(r2+1)%5][c2];else out[n++]=m[r1][c2],out[n++]=m[r2][c1];}
 out[n]=0;printf("Ciphertext: %s\n",out);return 0;}
