#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
   long long int i,j,temp,min,m,sum1=0,sum2=0;
    long long int *a = malloc(sizeof(int) * 5);
    for(i = 0;i < 5;i++){
       scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        min=a[i]; 
        m=i;
        for(j=i+1;j<5;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                m=j;
            }
            }
        temp=a[i];
        a[i]=a[m];
        a[m]=temp;
    }
    for(i=0;i<5;i++)
    {
       if(i!=4)
           sum1=sum1+a[i];
       if(i!=0)
            sum2=sum2+a[i];
    }
    printf("%lld %lld",sum1,sum2);
    return 0;
}
