#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
   long int min = 0;
   long int max = 0;
   long long int sum = 0;
   long int val = 0;
   for( int i = 0 ; i < 5; i++ ){ 
     scanf("%ld ", &val);
     if(0 == i) {
       min = val; 
       max = val;
     }
     sum += val;
     if( val < min )
       min = val;
     if (val > max )
       max = val;
  }
  printf("%lld %lld",sum - max , sum - min);
  
  return(0);
}


