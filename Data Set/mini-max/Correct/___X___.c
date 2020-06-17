#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long a[5];
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long long sum = a[0] + a[1] + a[2] + a[3] + a[4];
    long long min = 99999999999999;
    long long max = -99999999999999;
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
