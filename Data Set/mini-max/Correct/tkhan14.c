#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]={0},max=0,sum=0,min=0; 
    for (int i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
        if (i==0)
            {
                min = a[i];
            }
        if (a[i]>max)
            {
                max = a[i];
            }
       
        if (a[i]<min)
            {
                min = a[i];  
            }
        sum += a[i];
    }
     
    printf("%lld ",sum-max);
    printf("%lld",sum-min);
    return 0;
}
