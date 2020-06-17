#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    
    long int e,sum=0,sum1,max=1,min=pow(10,9);
    int i;
    for(i=0;i<5;i++){
    scanf("%lld",&a[i]);
        if(a[i]<=min)
            min=a[i];
        if(a[i]>=max)
            max=a[i];
    }
    for(i=0;i<5;i++)
        sum=sum+a[i];
    sum1=sum-max;
    printf("%lld ",sum1);
    sum=sum-min;
    printf("%lld",sum);
    return 0;
}
