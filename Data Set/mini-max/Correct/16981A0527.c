#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
  long i,a[5],b[5],sum=0,sum1,max,min;
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<5;i++)
        sum=sum+a[i];
    sum1=sum;
    for(i=0;i<5;i++)
        b[i]=sum1-a[i];
    min=b[0];
    max=b[0];
    for(i=0;i<5;i++)
        {
        if(b[i]<min)
            min=b[i];
        if(b[i]>max)
            max=b[i];
        
    }
    printf("%ld %ld",min,max);
    
    return 0;
}
