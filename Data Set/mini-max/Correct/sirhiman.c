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
    long long int sum=a[0]+a[1]+a[2]+a[3]+a[4];
    long long int min,max;
    min=max=sum-a[0];
    for(int i=1;i<5;i++)
        {
        long long int ans=sum-a[i];
        if(ans<min)
            min=ans;
        if(ans>max)
            max=ans;
        
    }
    printf("%lld %lld",min,max);
    return 0;
}
