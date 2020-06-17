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
    long int arr[5];
    scanf("%lld %lld %lld %lld %lld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    //get sorted string
    int i;
    int maxIndex =0, minIndex=0;
    long int max=arr[0], min=arr[0], minSum=0, maxSum=0;
    for(i=0; i<5; i++) {
        if(arr[i]>max) {
            max = arr[i];
            maxIndex = i;
        }
        if(arr[i]<min) {
            min = arr[i];
            minIndex = i;
        }
    }
    for(i=0; i<5; i++) {
        if(i != minIndex) {maxSum = maxSum + arr[i];}
        if(i != maxIndex) {minSum = minSum + arr[i];}
    }
    printf("%lld %lld", minSum, maxSum);
    return 0;
}
