#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],min,max,sum1=0,sum2=0,i,sum=0; 
for(i=0;i<5;i++)
    {
    scanf("%ld",&a[i]);
}
    min=a[0];
    max=a[0];
    for( i=0;i<5;i++)
        { if(a[i]<min)
            min=a[i];
        
    }
    for(i=0;i<5;i++)
        { if(a[i]>max)
             max=a[i];}
   for(i=0;i<5;i++)
       {sum+=a[i];}
    sum2=sum-min;
    sum1=sum-max;
    printf("%ld %ld",sum1,sum2);
    return 0;
}
