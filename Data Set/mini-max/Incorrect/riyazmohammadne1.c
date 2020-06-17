#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[4],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
         if(min<a[i])
        {
            min=a[i];
        }

    }
    int count=0,count1=0,sum=0,sum1=0;
    for(i=0;i<5;i++)
    {
        if((max>a[i]))
        {
            sum=sum+a[i];
            count++;
        }
    }    
        for(i=0;i<5;i++)
            {
                if(min>a[i])
                {
                            
                            // printf("%d",i);

                sum1=sum1+a[i];
                count1++;
                }
    }
    printf("%d %d",sum,sum1);
}