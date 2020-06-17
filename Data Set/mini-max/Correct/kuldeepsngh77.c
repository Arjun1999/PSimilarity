#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],sum=0,max,min;
    int i;
    for(i=0;i<5;i++)
        scanf("%lld",&a[i]);
    max=1;
    min=pow(10,9);
    for(i=0;i<5;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
        sum+=a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
