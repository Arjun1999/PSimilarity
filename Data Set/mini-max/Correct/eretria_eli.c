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
    long long sum=0,max=0,min,mi,ma;
    for(int i=0;i<5;i++)
        sum+=a[i];
    min=sum;
    for(int i=0;i<5;i++)
    {
        ma=sum-a[i];
        mi=sum-a[i];
        if(mi<min)
            min=mi;
        if(ma>max)
            max=ma;
        }
    printf("%lld %lld",min,max);
    
    
    return 0;
}
