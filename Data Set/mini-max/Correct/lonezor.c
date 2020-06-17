#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int values[5];
    unsigned long long int minValue = ~0;
    unsigned long long int maxValue = 0;
    unsigned long long int sum;
    int indexToSkip = 0;
    int i,j;
    scanf("%lld %lld %lld %lld %lld",&values[0],&values[1],&values[2],&values[3],&values[4]);
    
    for(i=0; i<5; i++)
    {
        indexToSkip = i;
        sum = 0;
         for(j=0; j<5; j++)
         {
             if (j == indexToSkip) continue;
             sum += values[j];
         }
        
        if (sum > maxValue)
        {
            maxValue = sum;
        }
        
        if (sum < minValue)
        {
          minValue = sum;    
        }
    }
    
    printf("%llu %llu", minValue, maxValue);
    
    return 0;
}
