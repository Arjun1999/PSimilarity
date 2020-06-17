#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    int i = 0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int sum[5];
    sum[0] = b+c+d+e;
    sum[1] = a+c+d+e;
    sum[2] = a+b+d+e;
    sum[3] = a+b+c+e;
    sum[4] = a+b+c+d;
    
    long long int min = sum[0];
    long long int max = sum[0];
    for(int i=0;i<5;i++){
        if(max <= sum[i])
        {
            max = sum[i];
        }
        if(min>sum[i]){
            min = sum[i];
        }
    }
    printf("%lld %lld", min, max);
    return 0;
}
