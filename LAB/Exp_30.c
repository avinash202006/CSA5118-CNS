#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("Let T=E_K(X) be the CBC-MAC of one-block message X (with zero IV).");
 puts("For two blocks X || (X XOR T), the second CBC input is E_K(X) XOR (X XOR T) = T XOR X XOR T = X.");
 puts("Thus the final MAC is E_K(X)=T. This demonstrates a length-extension/forgery weakness when variable-length messages use raw CBC-MAC without length/domain separation.");return 0;}
