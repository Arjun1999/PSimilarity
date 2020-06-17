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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int sum[5];
    sum[0] = a + b + c +d;
    sum[1] = e + b + c +d;
    sum[2] = e + a + c +d;
    sum[3] = e + a + b +d;
    sum[4] = e + a + b +c;
    long int max = sum[0], min = sum[0];
    for(int i = 1 ; i < 5 ; i++){
        if(sum[i] > max){
            max = sum[i];
        }
        if(sum[i] < min){
            min = sum[i];
        }
    }
    printf("%ld %ld\n", min, max);
    return 0;
}
