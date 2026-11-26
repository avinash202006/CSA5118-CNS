#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("Hill known-plaintext attack outline:");
 puts("For a 2x2 Hill cipher, collect two linearly independent plaintext digraph vectors P and matching ciphertext vectors C.");
 puts("Arrange columns into matrices P and C. If det(P) is invertible modulo 26, recover K = C * P^(-1) mod 26.");
 puts("Chosen-plaintext attack: request encryptions of AX and XA (vectors [0,0], [1,0], [0,1] as needed) to directly reveal key columns.");
 return 0;}
