#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int *arr) 
{
    int i,jsum=0,arr[5],ar[10];
   for(i=1;i<5;i++)
   {
       sum+=arr[i];
       ar[i]=sum;
       
   }
    for(j=1;j<5;j+++)
    {
        
        arr[i]=sum-i;
    }
    
    
}

int main() 
{
    int arr[5],i;
    for (int i = 0; i < 5; i++) 
   {
       scanf("%d",&arr[i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
