#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("DES decryption uses the same Feistel round function as encryption, with subkeys applied in reverse order: K16, K15, ..., K1.");
 puts("Key schedule: generate C0,D0 from PC-1; apply the standard left-rotation schedule to produce C1..C16,D1..D16; apply PC-2 for K1..K16; reverse the subkey array for decryption.");
 return 0;}
