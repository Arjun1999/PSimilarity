#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    
    long long int arr[5];
    long long int big_sum = 0, small_sum = 0;
    int n = 5, i = 0;
    long long int min = 0, max =0;
    scanf("%lld %lld %lld %lld %lld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    min = arr[0];
    max = arr[0];
    int key1 = 0, key2 = 0;
    for(i = 1; i < n; i++){
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    for(i = 0; i < n; i++){
        if(arr[i] == min && key1 == 0){
            key1++;
        }else{
            big_sum = big_sum + arr[i];
        }
        if(arr[i] == max && key2 == 0){
            key2++;
        }else{
            small_sum = small_sum + arr[i];
        }
    }   
    printf("%lld %lld", small_sum, big_sum);
   
    return 0;
}
