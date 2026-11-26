#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("CBC ciphertext bit error in C1: P1 is corrupted unpredictably; the corresponding bit in P2 flips; P3 onward are unaffected.");
 puts("A bit error in source plaintext P1 changes C1 and therefore propagates through every later CBC ciphertext block (with overwhelming probability).");
 puts("At receiver, P1 is corrupted; P2 is corrupted in the corresponding bit position due to XOR with C1; later plaintext blocks are generally corrupted unpredictably.");return 0;}
