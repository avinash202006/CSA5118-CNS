#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("Yes. If a plaintext block m shares a nontrivial factor with n, then gcd(m,n) reveals a factor of n.");
 puts("Compute gcd(m,n). If it is neither 1 nor n, it is a nontrivial factor and RSA modulus n is factored, compromising the private key.");
 puts("If only ciphertext is known, this fact about an unknown plaintext does not directly help unless the plaintext block can be obtained.");return 0;}
