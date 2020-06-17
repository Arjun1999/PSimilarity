#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int *arr = malloc(sizeof(int) * 5);
    int *arr_sum = calloc(5,sizeof(int));
    int j = 0,count=0,min, max;
    int arr_i;

    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    while(j < 5)
    {
        for(arr_i = 0 ; arr_i < 5; arr_i++)
        {
         if(count == arr_i)
         continue;
         arr_sum[j] = arr_sum[j] + arr[arr_i];   
        }
        j++;
        count++;
    }
    min = arr_sum[0];
    max = arr_sum[0];
    for(arr_i = 0; arr_i < 5; arr_i++)
    {
           if(min >  arr_sum[arr_i])
               min = arr_sum[arr_i];
           if(max  < arr_sum[arr_i])
               max = arr_sum[arr_i];
    }    
        
   printf("\n%d %d \n", min,max);
return 0;
}