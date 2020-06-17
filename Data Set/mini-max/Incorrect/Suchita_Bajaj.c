#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void miniMaxSum(int arr_count, int* arr) {


}

int main()
{
    int i,j,k;
    long long int arr[5];
    long long int sum[5]={0};
    long long int min,max;
    
    for(i=0;i<5;i++)
    scanf("%lld",&arr[i]);
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {    sum[i]=sum[i]+arr[j];
        }
        sum[i]=sum[i]-arr[i];
        
    }
    
  
    

   for (i=0;i<5;i++)
       if(sum[i]<sum[i+1])
           min=sum[i];
    
     for (i=0;i<5;i++)
        if(sum[i]>sum[i+1])
            max=sum[i];
       
       
       
    printf("%lld  %lld",min,max);
        
    
    
    
}
