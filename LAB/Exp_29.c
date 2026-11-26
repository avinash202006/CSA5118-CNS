#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("SHA-3 with 1024-bit rate has 1600-1024=576 capacity bits. Keccak lanes are 64 bits, so capacity occupies 9 lanes.");
 puts("Since each P0 rate lane is assumed nonzero and permutation is ignored, the rate lanes receive message bits, but the capacity lanes remain zero.");
 puts("Therefore no capacity lane ever becomes nonzero under the stated 'ignore permutation' assumption.");return 0;}
