#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("CBC encryption: C0=IV; Ci=E_K(Pi XOR C(i-1)).");
 puts("Security: choose 3DES over DES if constrained to these choices; use a fresh unpredictable IV. In modern systems AES is preferred.");
 puts("Performance: DES is generally faster than 3DES, but has an inadequate key size. 3DES performs three DES operations per block.");return 0;}
