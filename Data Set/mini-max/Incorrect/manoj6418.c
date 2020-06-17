#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5];
    long long int min=a[0],max=a[0],i;
    long long int sum=0;
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(i = 0; i<4;i++){
        if(a[i+1]<min)
            min=a[i+1];
        if(a[i+1]>max)
            max=a[i+1];
    }
    for(i=0;i<5;i++)
        sum=sum+a[i];
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
