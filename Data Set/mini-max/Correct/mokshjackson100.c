#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],min,max,sum=0;
    int i;
    scanf("%lld",&a[0]);
    min=a[0];max=a[0];sum=sum+a[0];
    for(i=1;i<=4;i++)
        {
        scanf("%lld",&a[i]);
        if (max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        sum=sum+a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
