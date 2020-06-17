#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long int addition(long long int p, long long int q, long long int s, long long int t ) {
    return(p+q+s+t);
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int sum[5];
    
    sum[0]= addition(b,c,d,e);
    sum[1] = addition(a,c,d,e);
    sum[2] = addition(a,b,d,e);
    sum[3] = addition(a,b,c,e);
    sum[4] = addition(a,b,c,d);
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 5-i-1; j++) {
            if(sum[j] > sum[j+1]) {
                long long int temp = sum[j];
                sum[j] = sum[j+1];
                sum[j+1] = temp;
            }
        }
    }
    
    printf("%lld %lld", sum[0], sum[4]);
    
    return 0;
}
