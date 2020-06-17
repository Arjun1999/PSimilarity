#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main(){
   unsigned long long int a[5],max,min,sum=0;
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<5;i++)
        {
        if(min>a[i])
            {
            min=a[i];
        }
        if(max<a[i])
            {
            max=a[i];
        }
        sum=sum+a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}




