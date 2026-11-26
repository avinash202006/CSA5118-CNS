#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){char s[10000];int f[26]={0},x=-1,y=-1;printf("Enter affine ciphertext: ");fgets(s,sizeof s,stdin);
 for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i]))f[toupper((unsigned char)s[i])-'A']++;
 for(int i=0;i<26;i++){if(x<0||f[i]>f[x]){y=x;x=i;}else if(y<0||f[i]>f[y])y=i;}
 printf("Most frequent: %c; second: %c\n",x+'A',y+'A');
 puts("Frequency alone is insufficient to uniquely break an affine cipher. Try all 12 valid a values and 26 b values, then score English.");return 0;}
