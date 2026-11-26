#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("DSA uses a fresh per-signature nonce k, so the same message normally produces different signatures.");
 puts("RSA signatures are deterministic only in textbook/deterministic-padding variants; randomized padding can also make RSA signatures differ.");
 puts("Critical implication: DSA nonce reuse or bias can reveal the private signing key. Generate k securely (or use deterministic DSA nonce generation).");return 0;}
