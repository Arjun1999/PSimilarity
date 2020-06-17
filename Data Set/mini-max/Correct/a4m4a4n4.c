#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],max,min;
    long long int b[5],sum=0; 
   int i;
    for(i=0;i<5;i++){
    scanf("%lld ",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<5;i++)
        {
        b[i]=sum-a[i];
    }
    max=b[0];
    min=b[0];
    for(i=1;i<5;i++)
        {if(b[i]<min)
            min=b[i];
         if(b[i]>max)
             max=b[i];
       }
    printf("%lld %lld",min,max);
    
    return 0;
}
