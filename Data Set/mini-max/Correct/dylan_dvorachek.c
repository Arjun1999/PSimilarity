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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long int arr[5] = {a, b, c, d, e};
    long int min = a;
    long int max = a;
    long int sum = a;
    int i;
    for(i = 1; i < 5; i++){
        sum += arr[i];
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    long int v1 = sum - max;
    long int v2 = sum - min;
    
    printf("%ld %ld", v1, v2);
    return 0;
}
