#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void calcAllInt(int a, int b, int c, int d, int e){
    long long int arr[5] = {a,b,c,d,e};
    long long int smallestSum, biggestSum;
    smallestSum = biggestSum = arr[0] + arr[1] + arr[2] + arr[3];
    long long int combinedSum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    long long int curSum = 0;
    for (int i=0; i<5; i++){
        curSum = combinedSum - arr[i];
        if(curSum < smallestSum) smallestSum = curSum;
        if(curSum > biggestSum) biggestSum = curSum;
    }
    printf("%lld %lld",smallestSum,biggestSum);
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    calcAllInt(a,b,c,d,e);
    return 0;
}
