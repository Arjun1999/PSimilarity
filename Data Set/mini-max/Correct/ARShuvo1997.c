#include <stdio.h>


int main(){
    long long int a,b,c,d,e,min=0,max=0,sum;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    max=(a>b)?a:b;
    max=(max>c)?max:c;
    max=(max>d)?max:d;
    max=(max>e)?max:e;

    min=(a<b)?a:b;
    min=(min<c)?min:c;
    min=(min<d)?min:d;
    min=(min<e)?min:e;

    sum=a+b+c+d+e;

    printf("%lld %lld", sum-max ,sum-min);

}
