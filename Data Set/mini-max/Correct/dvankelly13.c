#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int arr[5];
    long long int sum = 0;
    long long int max = 0;
    long long int min = 0;
    scanf("%lld %lld %lld %lld %lld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    for(int i = 0; i<5; i++){
        sum = sum + arr[i];
    }
    for(int i = 0; i<5; i++){
        long long int temp = sum - arr[i]; 
        if(min == 0){
            min = temp;
        }
        if(min > temp){
            min = temp;
        }
        if(max < temp){
            max = temp;
        }
    }
    printf("%lld %lld", min, max);
    
    return 0;
}
