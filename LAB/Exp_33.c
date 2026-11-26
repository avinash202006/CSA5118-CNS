#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("DES specification: 64-bit block, 56-bit effective key (64 bits including parity), 16 Feistel rounds.");
 puts("This source is an explanatory starter rather than a full DES implementation. For secure new systems use AES; DES is obsolete and brute-forceable.");
 puts("A full DES implementation requires the standard IP, FP, E, P, PC-1, PC-2, shift schedule, and S-box tables.");return 0;}
