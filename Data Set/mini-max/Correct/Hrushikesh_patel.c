#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    long int *sum=malloc(sizeof(long int)*5);

    for(int i=0;i<5;i++)
    {
        
              for(int j=0;j<5;j++)
              
              {
                  
         if(i==j){continue;}
        
        sum[i]+=arr[j];
            
        
              }
    }
    
    long int big=sum[0];
    long int temp;
    for(int i=1;i<5;i++)
    {
        if(big<sum[i])
        {
            
         temp=big;
            big=sum[i];
            sum[i]=temp;
         }
    }
    
    long int small=sum[0];
    for(int i=1;i<5;i++)
    {
        if(small>sum[i])
        {
            
         temp=small;
            small=sum[i];
            sum[i]=temp;
         }
    }
    
printf("%ld %ld",small,big);
    
    return 0;
}
