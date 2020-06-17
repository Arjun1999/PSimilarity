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
    long int sum = 0;
    for (int i = 0 ; i != 5; i++)
    {
        sum = arr[i] + sum; 
    }
    
   // printf("%d",sum);
    long long int min = arr[0]; 
    for(int i = 0; i != 5; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
   // printf("%d",min);
    
    long long int max = arr[0]; 
    for(int i = 0; i != 5; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    printf("%lli ",(sum - max));
    printf("%lli",(sum - min));
    return 0;
    
}
