#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int arr[5],i,j,temp,sum1=0,sum2=0;
    for( i=0 ; i<5 ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    for( j=0 ; j<5 ; j++ )
    {
        for( i=0 ; i<5 ; i++ )
        {
            if (arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }

    }
    for (i=1; i<5; i++)
        sum1=sum1+arr[i];
    for(i=0; i<4; i++)
        sum2=sum2+arr[i];
    printf("%d %d",sum1,sum2);
}
