#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],s[5],i,sum=0,lar=0,sm=0;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum = sum + a[i];
    }
    for(i=0;i<5;i++)
    {
        s[i]=sum-a[i];
    }
    lar=s [0];
    sm=s [0];
    for(i=0;i<5;i++)
    {
        if(s[i]>lar)
        {
            lar=s[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(s[i]<sm)
        {
            sm=s[i];
        }
    }
    printf("%lld %lld",sm,lar);
    return 0;
}
