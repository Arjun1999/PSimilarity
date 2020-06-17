#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    long long int a[5],s=0,i,d=-9999999999,e=9999999999;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
        s=s+a[i];
    }
    for(i=0;i<5;i++)
    {
        if(d<a[i])
            d=a[i];
        if(e>a[i])
            e=a[i];
    }
    printf("%lld %lld",s-d,s-e);
    return 0;
}
