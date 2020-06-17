#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i;
   long long int a[5],max,min,sum=0;
    for(i=0;i<=4;i++)
    {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
        
    max=a[0];
    min=a[0];
    for(i=0;i<=4;i++)
        {
        if(max<a[i])
         max=a[i];
    if(min>a[i])
        min=a[i];
    }
    printf("%lld ",sum-max);
    printf("%lld ",sum-min);
        
    
    
    return 0;
}
