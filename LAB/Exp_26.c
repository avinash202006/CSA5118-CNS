#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("No. RSA public/private keys are tied to the same modulus n. If Bob's private exponent d is leaked, changing e and d while keeping n does not restore security.");
 puts("An attacker who knows the old d and n can factor n (under standard RSA assumptions) and derive future private keys. Bob should generate a fresh modulus and key pair.");return 0;}
