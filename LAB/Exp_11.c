#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){long double keys=1;for(int i=0;i<25;i++)keys*=25-i;printf("Raw Playfair key squares: 25! = approximately 2^%.2Lf\n",log2l(keys));
 puts("Effective unique-key count is smaller because equivalent square transformations can produce identical mappings; practical estimates depend on the equivalence convention.");return 0;}
