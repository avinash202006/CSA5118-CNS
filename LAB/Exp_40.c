#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){puts("Monoalphabetic substitution frequency attack framework.");
 puts("A reliable automatic solver requires a tetragram/quadgram English scoring table and search (simulated annealing or hill climbing).");
 puts("Basic frequency counts alone cannot determine a full 26-letter permutation. This starter reports why a language model is required.");
 puts("For a production solver, score candidate decryptions using log P(character 4-gram) and retain the top N keys.");return 0;}
