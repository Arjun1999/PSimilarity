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
    int a[5],i,b[5],sum,count,min,max;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    {   count=0;
        sum=0;
        for(j=i;j<5;j++)
        {  count++;
           sum+=a[i]; 
        }
        if(count!=4)
            for(i=0;count<=4;count++)
                sum+=a[i];
       b[i]=sum;
    }
    max=min=b[0];
    for(i=0;i<5;i++)
    {
        if(min>b[i])
            min=b[i];
        if(max<b[i])
            max=b[i];
    }   
    printf("%d %d",min,max);
    return 0;
}