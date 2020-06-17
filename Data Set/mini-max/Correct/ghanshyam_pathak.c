#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    long long max=-999999999;
    long long min=999999999;
    long long sum=0;
    for(int i=0;i<5;i++){
        scanf("%ld",&a[i]);
        sum+=a[i];
        if(a[i]>max)max=a[i];
        if(a[i]<min)min=a[i];
    }
    max=sum-max;
    min=sum-min;
    
     printf("%lld %lld", max, min);
    
    
    return 0;
}
