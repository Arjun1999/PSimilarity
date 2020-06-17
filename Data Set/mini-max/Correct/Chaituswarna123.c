#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
  long max,min,n,i,j,sum=0;  
 long a[1000],b[1000];
    for(i=1;i<=5;i++)
    {
            scanf("%ld",&a[i]);
           sum=sum+a[i];
    }
       for(i=1;i<=5;i++)
       {
           b[i]=sum-a[i];
       }
    max=b[1];
    min=b[1];
    for(i=1;i<=5;i++)
    {
            if(b[i]>max)
               max=b[i];
              if(b[i]<min)
                min=b[i];
           
       }
    printf("%ld %ld",min,max);
}
