#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5), n, i, j, sum;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
        n = n + 1;
    }
    
    for (i=0; i<n; i++){
        sum = 0;
        for (j=0;j<n;j++){
            if (j != i){
                sum = sum + arr[i];
            } 
            printf("%d\n", sum);
        }
        //printf("%d\n", sum);
    }
    return 0;
}
