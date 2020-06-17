#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],i,min,max,sum=0;
    for(i=0;i<5;i++)
    scanf("%lld",&a[i]);
    min=a[0];
    for(i=1;i<5;i++){
        if(min>a[i])
            min=a[i];
    }
    max=a[0];
    for(i=1;i<5;i++){
        if(max<a[i])
            max=a[i];
    }
    for(i=0;i<5;i++)
        sum=sum+a[i];
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
