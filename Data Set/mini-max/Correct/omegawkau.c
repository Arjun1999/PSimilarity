#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
 long int a[10],i,j,temp,sum1=0,sum2=0;
     for(i=0;i<5;i++)
     {
     scanf("%ld",&a[i]);
     }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    for(i=0;i<4;i++)
    {
        sum1=sum1+a[i];
    }
    for(i=1;i<5;i++)
    {
        sum2=sum2+a[i];
    }
    printf("%ld %ld",sum1,sum2);
}
