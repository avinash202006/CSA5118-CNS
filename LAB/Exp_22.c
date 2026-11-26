#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("CBC mode: C0=IV; Ci=E_K(Pi XOR C(i-1)); decryption Pi=D_K(Ci) XOR C(i-1).");
 puts("For the stated S-DES test, use IV 10101010, key 0111111101, plaintext blocks 00000001 and 00100011.");
 puts("A complete S-DES implementation must include IP, inverse IP, expansion/permutation, S-boxes, P4, and the two-round key schedule.");return 0;}
