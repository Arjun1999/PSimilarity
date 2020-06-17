#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5];
    int i;
    long long int min,max,sum1=0,sum2=0;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    min = a[0];
    max = a[0];  
    for(i=1;i<5;i++)
    {
        if(a[i]<min) min=a[i];
    }
    for(i=0;i<5;i++)
    {
        sum1+=a[i];
    }
    for(i=1;i<5;i++)
    {
        if(a[i]>max) max=a[i];
    }
    for(i=0;i<5;i++)
    {
        sum2+=a[i];
    }
    printf("%lld %lld",sum2-max,sum1-min);
    return 0;
}
