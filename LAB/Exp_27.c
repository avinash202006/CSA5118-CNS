#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("No. Encrypting each alphabetic character separately with textbook RSA is deterministic and leaks patterns.");
 puts("Efficient attack: encrypt all 26 possible letters under the public key to build a codebook, then map each ciphertext block back to its letter. Use randomized secure padding such as OAEP instead.");return 0;}
