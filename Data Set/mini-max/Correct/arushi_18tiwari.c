#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 

    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long int sum=0;
    for(int i=0;i<5;i++)
        {
        sum=sum+a[i];
    }
    long int min=a[0];
    long int max=a[0];
    for(int i=1;i<5;i++)
        {
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
