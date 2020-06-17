#include <stdio.h>

int main(){
    int min, max;
    long int sum = 0;
    int arr_number[5];
    
    min = arr_number[0];
    max = arr_number[0];

    for(int i = 0; i < 5; i++){
        if(arr_number[i] < min) min = arr_number[i];
        if(arr_number[i] > max) max = arr_number[i];
        sum += arr[i];
    }
    printf("%ld %ld", sum-min, sum-max);
    
    return 0;
}