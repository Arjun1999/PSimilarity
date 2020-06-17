#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int min = 0;
    long int max = 0;
    long int sum = 0;
    
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0;i<5;i++)
    {
        sum = 0;
        for(int j=0,arr_i=i;j<4;j++,arr_i++)
            sum+=arr[arr_i%5];
        
        if(min == 0)
            min=sum;
        else if(sum <min)
            min=sum;
        
        if(max == 0)
            max=sum;
        else if(sum>max)
            max = sum;
    }
    printf("%ld %ld",min,max);
    
            
    return 0;
}
