#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>

int main(){
    long long int arr[5] = {0};
    scanf("%lld %lld %lld %lld %lld",&(arr[0]),&(arr[1]),&(arr[2]),&(arr[3]),&(arr[4]));
    long int min,max;
    min = 0;
    max = 0;
    for(register int i=1;i<5;i++){
        if(arr[i] < arr[min]){
            min = i;
        } else if (arr[i] > arr[max]){
            max = i;
        }
    }
    int64_t minSum = 0,maxSum = 0;
    for(register int i=0;i<5;i++){
        if(i != min){
            minSum += arr[i];
        }
        if (i != max){
            maxSum += arr[i]; 
        }
    }
    printf("%lld %lld",maxSum,minSum);
    return 0;
}
