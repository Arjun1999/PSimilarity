#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long a[5],b[5],c=0,d=0,k=0;
    int i,j,n=5;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        k=k+a[i];
    }
    for(i=0;i<n;i++)
    {
        b[i]=k-a[i];
    }
    c=b[0];
    d=b[0];
    for(i=1;i<n;i++)
    {
        if(b[i]>c)
            c=b[i];
        if(b[i]<d)
            d=b[i];
    }
    printf("%lld %lld",d,c);
    return 0;
}