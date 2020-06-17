#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    
    long int a[5],b[5],i,j,sum=0,temp;
    for(i=0;i<5;i++)
    {scanf("%ld",&a[i]);}
    for(i=0;i<5;i++)
    {sum=sum+a[i];}
    for(i=0;i<5;i++)
    {b[i]=sum-a[i];}
    
    for(i=0;i<5-1;i++)
        {
        for(j=0;j<5-i-1;j++)
            {
            if(b[j]>b[j+1])
                {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    printf("%ld %ld",b[0],b[4]);
    return 0;
}
