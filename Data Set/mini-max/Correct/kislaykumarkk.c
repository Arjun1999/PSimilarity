#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long long int sum,max=a[0],min=a[0];
    int i;
    for(i=0;i<5;i++){
        if(a[i]>max)
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    sum=a[0]+a[1]+a[2]+a[3]+a[4];
    printf("%lld %lld", sum-max,sum-min);
    return 0;
}
