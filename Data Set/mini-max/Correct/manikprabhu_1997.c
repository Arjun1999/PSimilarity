#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int a[5],i,j;
    
    for(i=0;i<5;++i)
        scanf("%d ",&a[i]);
    
    for(i=0;i<5;++i)
    {
        for(j=0;j<4;++j)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     long int min=0,max=0;
    
    for(i=0;i<4;++i)
        min=min+a[i];
    
    for(i=1;i<5;++i)
        max=max+a[i];
    
    printf("%ld %ld",min,max);
    return 0;
    
   
}
