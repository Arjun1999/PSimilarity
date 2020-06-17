#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int MAX;
    long int MIN;
    long int sum_min = 0;
    long int sum_max = 0;
    long int arr[6] = {0};
    long int arr_temp[6] = {0};
    int i = 0;
    int max_index = 0;
    int min_index = 0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    arr[i++] = a;
    arr[i++] = b;
    arr[i++] = c;
    arr[i++] = d;
    arr[i++] = e;
    for(i=0;i<5;i++){
        arr_temp[i] = arr[i];
    }
    MAX = arr[0];
    MIN = arr[0];
    for (i=1;i<5;i++){
        if(arr[i] > MAX){ 
            MAX = arr[i];
            max_index = i;
        }
        if(arr[i] < MIN){
            MIN = arr[i];
            min_index = i;
        }
    }
    arr[max_index] = 0;
    arr_temp[min_index] = 0;
    for (i=0;i<5;i++){
        sum_min = sum_min + arr[i];
        sum_max = sum_max + arr_temp[i];
    }
    printf("%ld %ld\n",sum_min,sum_max);
    return 0;
}
