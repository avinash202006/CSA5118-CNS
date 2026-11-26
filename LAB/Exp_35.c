#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){char p[]="send more money",*q=p;int k[]={9,0,1,7,23,15,21,14,11,11,2,8,9},j=0;
 printf("Ciphertext: ");for(;*q;q++)if(isalpha((unsigned char)*q)){int x=tolower((unsigned char)*q)-'a';printf("%c",'a'+(x+k[j++])%26);}else putchar(*q);
 puts("\nA key for target 'cash not needed' is computed as (ciphertext - target) mod 26, position by position.");return 0;}
