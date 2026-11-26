#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

int main(void){char s[10000];int f[26]={0},shift[26];printf("Ciphertext: ");fgets(s,sizeof s,stdin);printf("How many candidates? ");int top;scanf("%d",&top);
 for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i]))f[tolower((unsigned char)s[i])-'a']++;
 for(int k=0;k<26;k++){int best=0;for(int i=1;i<26;i++)if(f[i]>f[best])best=i;shift[k]=best;f[best]=-1;}
 if(top>26)top=26;for(int t=0;t<top;t++){printf("%2d: ",t+1);for(int i=0;s[i];i++)if(isalpha((unsigned char)s[i])){int b=islower((unsigned char)s[i])?'a':'A';putchar(b+(s[i]-b-shift[t]+26)%26);}else putchar(s[i]);}return 0;}
