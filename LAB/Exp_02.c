#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void) {
    char key[27], s[1000]; int seen[26]={0};
    printf("Enter 26-letter substitution alphabet: "); scanf("%26s",key);
    if(strlen(key)!=26){puts("Key must contain 26 letters.");return 1;}
    for(int i=0;i<26;i++){int x=tolower((unsigned char)key[i])-'a'; if(x<0||x>25||seen[x]++){puts("Invalid key: letters must be unique.");return 1;}}
    getchar(); printf("Enter plaintext: "); fgets(s,sizeof s,stdin);
    for(int i=0;s[i];i++) if(isalpha((unsigned char)s[i])) {char b=isupper((unsigned char)s[i])?'A':'a';s[i]=(char)(b+(tolower((unsigned char)s[i])-'a')); s[i]=(char)(b+(tolower((unsigned char)s[i])-'a')); /* mapped below */ s[i]=(char)(b+(tolower((unsigned char)key[tolower((unsigned char)s[i])-'a'])-'a'));}
    printf("Ciphertext: %s",s); return 0;
}
