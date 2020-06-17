#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   
  long long int x[5],min,max,sum=0;
    int i;
    scanf("%lld",&x[0]);
    min=max=x[0];
    sum=sum+x[0];
    for(i=1;i<5;i++)
     {  scanf("%lld",&x[i]); 
      sum=x[i]+sum;
           }
      for(i=1;i<5;i++){
        if(min>x[i])
            min=x[i];
        if(max<x[i])
            max=x[i];        
        }

        printf("%lld %lld",sum-max,sum-min);
    
        return 0;
}
