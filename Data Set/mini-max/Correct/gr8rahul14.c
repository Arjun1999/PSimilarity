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
    
    long int max=0,min=0;

    int i=0,j=0,temp;
    for(j=0;j<4;j++)
    {
    for(i=0; i<4;i++) {
        if(arr[i] > arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    }
    
    for (i=0;i<4;i++)
        min += arr[i];
    
    for(i=1;i<5;i++)
        max += arr[i];
    
  
    printf("%ld %ld", min, max);
    return 0;
}
