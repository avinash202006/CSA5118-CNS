#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("PT-109 Playfair ciphertext decryption requires the agreed keyword/key square.");
 puts("This item gives ciphertext but no key. A unique plaintext cannot be recovered without the key or additional assumptions.");
 puts("Use the Playfair decryption program in Exercise 3 after entering the recovered keyword.");return 0;}
