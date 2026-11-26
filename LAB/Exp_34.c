#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("Padding: append 1 then enough 0 bits to finish a block; add a full padding block when plaintext already aligns.");
 puts("Reason: the receiver can always identify and remove padding unambiguously, including when the original message ends exactly on a block boundary. This avoids ambiguity about whether the final block contains padding.");return 0;}
