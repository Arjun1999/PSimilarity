#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 
    long long int sum=0;
    
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    sum=a[0]+a[1]+a[2]+a[3]+a[4];
    long long int min=sum-a[0];
    long long int max=sum-a[0];
    int i;
    for(i=1;i<5;i++)
    {
        if((sum-a[i])<min)
            min=sum-a[i];
        if((sum-a[i])>max)
            max=sum-a[i];
    }    
    printf("%lld %lld",min,max);
    return 0;
}
