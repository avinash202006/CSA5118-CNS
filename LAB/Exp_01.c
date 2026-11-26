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
    char s[1000]; int k;
    printf("Enter plaintext: "); fgets(s,sizeof s,stdin);
    printf("Enter shift (1-25): "); scanf("%d",&k); k=((k%26)+26)%26;
    for(int i=0;s[i];i++) if(isalpha((unsigned char)s[i])) {
        char b=isupper((unsigned char)s[i])?'A':'a';
        s[i]=(char)(b+(s[i]-b+k)%26);
    }
    printf("Ciphertext: %s",s); return 0;
}
