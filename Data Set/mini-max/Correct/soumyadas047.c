#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int cmpfunc (const void * a, const void * b)
{
   return ( *(long int*)a - *(long int*)b );
}

int main(){
    long int a[5]; 
    long int maxsum = 0;
    long int minsum = 0;
    int i;
    for(i = 0; i<5;i++)
    {
        scanf("%ld",&a[i]);        
    }
    
    qsort(a, 5, sizeof(long int), cmpfunc);
    
    for(i = 0; i<4;i++)
    {
        minsum = minsum + a[i];        
    }
    
    for(i = 4; i>0;i--)
    {
        maxsum = maxsum + a[i];        
    }
    
    printf("%ld %ld", minsum, maxsum);     
    
    return 0;
}
