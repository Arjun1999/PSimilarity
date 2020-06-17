#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int arr[5]; 
      long long int sum=0;
    long long int summ[5];
      int i;
    
    for(i=0;i<5;i++)
        {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<5;i++)
        {
        sum=sum+arr[i];
    }
   
  
    for(i=0;i<5;i++)
        {
        summ[i]=sum-arr[i];
    }
    long long int min;
    min=summ[0];
    for(i=1;i<5;i++)
        {
        if (summ[i] < min)
    {
       min  = summ[i];
       
    }
  }
    printf("%lld ",min);
    
    long long int max;
    max=summ[0];
    for(i=1;i<5;i++)
        {
        if (summ[i] > max)
    {
       max  = summ[i];
       
    }
  }
    printf("%lld",max);
    
    
    return 0;
}
