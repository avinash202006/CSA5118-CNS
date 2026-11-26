#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void clean_letters(const char *src, char *dst) {
    int j=0;
    for (int i=0; src[i]; i++) if (isalpha((unsigned char)src[i])) dst[j++]=(char)tolower((unsigned char)src[i]);
    dst[j]='\0';
}

long long gcdext(long long a,long long b,long long *x,long long *y){if(!b){*x=1;*y=0;return a;}long long x1,y1,g=gcdext(b,a%b,&x1,&y1);*x=y1;*y=x1-(a/b)*y1;return g;}
int main(void){int n=3599,e=31,p=0,q=0;for(int i=2;i*i<=n;i++)if(n%i==0){p=i;q=n/i;break;}if(!p){puts("Factorization failed");return 1;}long long phi=(p-1)*(q-1),x,y;gcdext(e,phi,&x,&y);long long d=(x%phi+phi)%phi;printf("p=%d q=%d phi(n)=%lld\nPrivate exponent d=%lld\n",p,q,phi,d);return 0;}
