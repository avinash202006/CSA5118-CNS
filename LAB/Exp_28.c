#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("Correct Diffie-Hellman sends A=g^a mod p and B=g^b mod p; shared key is B^a=A^b=g^(ab) mod p.");
 puts("Sending a^g and b^g does not create a matching shared secret in general.");
 puts("Without authentication, Eve can perform a man-in-the-middle attack without learning a or b. Use authenticated DH (signatures/certificates). Discrete-log hardness protects the exponents.");return 0;}
