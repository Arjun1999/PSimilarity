#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int sum_all=0;
    long long int arr[5];
    long long int max,min;
    for(int i=0;i<5;i++){
        scanf("%lld ",&arr[i]);
        sum_all+=arr[i];
    }
    max = 1;
    min = sum_all;
    for(int i=0;i<5;i++){
        if((sum_all - arr[i]) > max){
            max = sum_all - arr[i];
        }
        if(sum_all - arr[i]<min){
            min = sum_all - arr[i];
        }
    }
    printf("%lld %lld",min,max);
    
    return 0;
}
