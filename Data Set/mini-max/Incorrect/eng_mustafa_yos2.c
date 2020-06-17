#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

void miniMaxSum(int arr_size, int* arr) {
    long int x[5];
    int j = 0;
    int sum = 0;
    long int temp;
        for(int i = 0; i < 5; i++){
sum += arr[i];
        }
    for(int j = 0; j < 5; j++){
        x[j] = sum - arr[j];
    }
    for(int j = 0; j < 5; j++){
 for(int j = 0; j < 5; j++){
if(x[j] > x[j+1]){
    temp = x[j];
    x[j] = x[j+1];
    x[j+1] = temp;
}
}
    }
    printf("\n%d %d",x[0], x[4]);
}
int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}