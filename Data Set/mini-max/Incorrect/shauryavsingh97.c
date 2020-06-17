#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    int t=0;
    int p=0;
    for(int i=1;i<arr_size;i++){
        
        if(arr[0]<arr[i]){
            p+=arr[0];
        arr[0]=arr[i];
            t+=arr[i];
            
        }       
    }

    
    printf("%d ",p);
    printf("%d",t);
    
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
