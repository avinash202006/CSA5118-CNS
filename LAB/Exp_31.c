#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("CMAC reduction constants (Rb): 64-bit block: 0x1B; 128-bit block: 0x87.");
 puts("Compute L=E_K(0^b). K1=leftshift(L), XOR Rb if the most significant bit of L was 1. K2 is derived identically from K1.");
 puts("The left shift multiplies the field element by x; conditional XOR with Rb reduces modulo the irreducible polynomial.");return 0;}
