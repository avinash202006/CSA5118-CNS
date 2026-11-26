#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int gcd(int a,int b){return b?gcd(b,a%b):a;}
int main(void){int a,b;char s[1000];printf("Enter a and b: ");scanf("%d%d",&a,&b);a=(a%26+26)%26;b=(b%26+26)%26;
 if(gcd(a,26)!=1){puts("Invalid a: gcd(a,26) must equal 1.");return 1;}
 getchar();printf("Plaintext: ");fgets(s,sizeof s,stdin);
 for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i])){int base=islower((unsigned char)s[i])?'a':'A';s[i]=(char)(base+(a*(s[i]-base)+b)%26);}
 printf("Ciphertext: %s",s);puts("b may be any integer modulo 26. Valid a: 1,3,5,7,9,11,15,17,19,21,23,25.");return 0;}
