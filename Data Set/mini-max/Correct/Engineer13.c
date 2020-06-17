#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,min,max; 
    long long int sum;
    scanf("%ld",&a);
    sum=min=max=a;
    for(int i=1;i<5;i++)
        {
        scanf("%ld",&a);
        sum+=a;
        if(min>a)   min=a;
        if(max<a)   max=a;
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
