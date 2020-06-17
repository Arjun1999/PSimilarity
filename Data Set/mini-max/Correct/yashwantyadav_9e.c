#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int max=0,sum=0;
    long long int min;
    long long int a[5];
    for(int i=0;i<5;i++)
        {
           scanf("%lld",&a[i]);
           sum+=a[i];
         }
    min=sum;
    for(int i=0;i<5;i++)
        {
           long long int max1,min1;
            max1= sum-a[i];
            min1=sum-a[i];
           if (max<max1)
               {max=max1;}
           if (min>min1)
               {min=min1;}
         }
    printf("%lld %lld",min,max);
    return 0;
}