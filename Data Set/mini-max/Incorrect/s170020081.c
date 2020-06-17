#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    
    for(int i = 0; i < 5; i++){
       scanf("%d",&a[i]);
    }
    
    long sum = 0; 
    for(int i = 0; i < 5; i++)
    {
        sum = a[i] + sum;
    }
    
    long lowest = sum, new_lowest = 0, highest = 0;
    for(int j = 0; j < 5; j++)
    {
        long a = sum - a[j];
        
        if(a < lowest)
        {
            lowest = a;
            new_lowest = a;
        }
        if(a > highest) 
        {
            highest = a;
        }
    }
    
    printf("%ld %ld", new_lowest, highest);
   
}