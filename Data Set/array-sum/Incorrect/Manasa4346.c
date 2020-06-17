#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
    {
    int a[6],i,sum=0,N=6;
    printf("\n enter 6 integers:");
    for(i=0;i<6;i++)
    
        {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    
    for(i=0;i<6;i++)
        printf("\n %d",a[i]);
    printf("\n sum of array elements are: %d",sum);
    
    }