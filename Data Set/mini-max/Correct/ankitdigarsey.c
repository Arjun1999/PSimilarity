#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    
    long int a[5];   
    
    for (int i=0;i<5;i++)
        scanf("%ld",&a[i]);
    
    long int max=a[1]+a[2]+a[3]+a[4],min=a[1]+a[2]+a[3]+a[4],temp;
    for (int i=0;i<5;i++)
    {    temp=0;
        for (int j=0;j<5;j++)
        {    if (i==j)
                continue;
            temp+=a[j];
        }
    
     if (temp>max) max=temp;
    if (temp<min) min=temp;     
     
    }
    
    
    
    printf("%ld %ld",min,max);
    
    
    
    return 0;
}
