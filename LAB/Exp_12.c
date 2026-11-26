#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int modinv(int a){for(int x=1;x<26;x++)if((a*x)%26==1)return x;return -1;}
int main(void){char s[1000],p[1000];int a[2][2]={{9,4},{5,7}},det=(9*7-4*5)%26,inv=modinv((det+26)%26);printf("Plaintext: ");fgets(s,sizeof s,stdin);clean_letters(s,p);int n=strlen(p);if(n%2)p[n++]='x',p[n]=0;
 printf("Ciphertext: ");for(int i=0;i<n;i+=2){int x=p[i]-'a',y=p[i+1]-'a';printf("%c%c",'a'+(9*x+4*y)%26,'a'+(5*x+7*y)%26);}printf("\nDeterminant=%d inverse=%d (mod 26)\n",det,inv);return 0;}
