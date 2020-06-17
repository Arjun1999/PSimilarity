#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int test_sum(int n, int skip,int *arr)
{
    long int result=0;
    for(int i=0;i<n;i++)
    {
        if(i!=skip)
        {
            result+=arr[i];            
        }        
        
    }
    return result;    
    
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int  sum_array[5];
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i;i<5;i++)
    {
        sum_array[i]=test_sum(5,i,arr);  
      //  printf("\n sum_array[%d]=%d",i,sum_array[i]);
    }
    long int max=0,min=0x7fffffffffffffff;
   // printf("\n%ld %ld",min,max);
    for(int i=0;i<5;i++)
     {
        if(max < sum_array[i])
        {
            max=sum_array[i];
           // printf("\n max=%ld, sum_array[%d]=%ld",max,i, sum_array[i]);
        }
        
        if(min >= sum_array[i])
        {
            min=sum_array[i];
          //  printf("\n min=%ld, sum_array[%d]=%ld",min,i, sum_array[i]);
        }
         
     }
    
    printf("%ld %ld",min,max);
    
    return 0;
}


