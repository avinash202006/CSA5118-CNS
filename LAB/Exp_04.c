#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){char s[1000],key[200];int j=0;printf("Plaintext: ");fgets(s,sizeof s,stdin);printf("Keyword: ");scanf("%199s",key);
 for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i])){int b=islower((unsigned char)s[i])?'a':'A';int sh=tolower((unsigned char)key[j++%strlen(key)])-'a';s[i]=(char)(b+(s[i]-b+sh)%26);}
 printf("Ciphertext: %s",s);return 0;}
