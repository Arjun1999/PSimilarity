#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int big=0, small=0, i,sum=0;
    
    int *a = malloc(sizeof(int) * 5);
    
    for(int i = 0; i < 5; i++)
    {
       scanf("%d",&a[i]);
               
        big = a[0];
        small = a[0];
     
            if(big < a[i])
                big = a[i];
        
            if(small > a[i])
                small = a[i];
            
            sum = sum + a[i];
        }
        
        printf("%d  %d", sum-big, sum-small);
        
    return 0;
}

