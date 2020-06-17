#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long int min = 0, max = 0, sum = 0;
    int i = 0;
    int j = 0;
    int arr_i;
    for( arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            if (i!=j){
                sum = sum+arr[j];
            }
		}
            if (i == 0){
                min = sum;
                max = sum;
            }
            else{
                if (sum < min){
                    min = sum;
                }
                if (sum > max){
                    max = sum;
                }
            }
        
        sum = 0;
    }
    printf("%ld  %ld", min, max);
    return 0;
}

