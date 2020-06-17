#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int sum[5]={};
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        
    }
    int j=0,i;
    for(i = 0; i < 5; i++)
    {
    for(int arr_i = 0; arr_i < 5; arr_i++){
        if(arr_i!=j)
            sum[j]=sum[j]+arr[arr_i];
    }
        j++;
    }
    
    long int max=sum[0],min=sum[0];
    
    for(i=1;i<5;i++)
    {
      if(sum[i]>max)
            max=sum[i];
        else if(sum[i]<min)
            min=sum[i];
    }
    
    printf("%ld %ld",min,max);
   
    
    return 0;
}
