#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int *arr_out =  malloc(sizeof(int) * 5);
int i,j,temp;
    
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
    }
    
    for(i=0;i<5;i++)
        arr_out[i] = 0;
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i == j)
                continue;
            else
                arr_out[i] =arr_out[i] +   arr[j];       
        }
    }
    
     for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr_out[i] > arr_out[j])
                temp = arr_out[i];
            arr_out[i] = arr_out[j];
            arr_out[j] = temp; 
        }
     }
    
    printf("%d %d",arr_out[0],arr_out[4]);
    
    
    return 0;
}
