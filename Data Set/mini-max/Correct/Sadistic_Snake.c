#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int N[5]; 
    long int sum; 
    long int min = 0; 
    long int max = 0;

    scanf("%ld %ld %ld %ld %ld",&N[0],&N[1],&N[2],&N[3],&N[4]);
    sum = N[0]+N[1]+N[2]+N[3]+N[4];
    
    for( int i = 0; i < 5; i++ )
    {
       if( min > sum - N[i] || min == 0)
           min = sum - N[i];
       if( max < sum - N[i])
           max = sum - N[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}