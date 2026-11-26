#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("DES key schedule: PC-1 splits the 56 effective key bits into C0 and D0 (28 bits each).");
 puts("Each 48-bit round key is PC-2(Ci || Di): 24 selected bits originate from Ci and 24 from Di, which are disjoint halves.");
 puts("The round rotations change which positions are selected; implement PC-1, the rotation schedule, and PC-2 tables for exact subkeys.");return 0;}
