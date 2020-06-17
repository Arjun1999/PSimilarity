#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n=0,i,j;
    long long int ar[10],temp[10],sum=0,min,max;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(j=0;j<5;j++)
    {
    for(i=0;i<5;i++)
    {      if(i==n)
           {
               continue;
           }
           else{
               sum +=ar[i];

               }
    }
    temp[j]=sum;
    sum=0;
    n++;
    }

    max=temp[0];
    for(i=1;i<5;i++)
    {
        if(max<temp[i])
        {
            max=temp[i];
        }

    }
    min=temp[0];
    for(i=1;i<5;i++)
    {
        if(min>temp[i])
        {
            min=temp[i];
        }

    }
    printf("%lld %lld",min,max);
    return 0;
}
