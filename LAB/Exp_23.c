#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("CTR mode: encrypt counter blocks and XOR with plaintext. Ci=Pi XOR E_K(CTR_i); decryption is identical.");
 puts("Increment the counter for every block, never reuse a key/counter pair. The given S-DES test can be checked against the standard S-DES tables.");return 0;}
