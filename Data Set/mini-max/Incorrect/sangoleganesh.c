#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
   int min=0;
    int max=0;
    int i,j,k;
    int sum=0;
    for(i=0;i<arr_size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            
        }
        
    }
    
    
    for(j=0;j<arr_size;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
            
        }
        
    }
    for(k=0;k<arr_size;k++)
    {
        sum=sum+arr[k];
    }
    printf("%d ",(sum-max));
     printf("%d",(sum-min));
    
    
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
