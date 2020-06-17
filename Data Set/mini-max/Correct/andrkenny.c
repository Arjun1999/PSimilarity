#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5];     
    long long int min=5000000000,max=0;
    long int temp;
    
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    
    for(int ctr=0;ctr<5;ctr++)
    {
        temp=a[0]+a[1]+a[2]+a[3]+a[4]-a[ctr];
        
        if(temp>max)
            {max=temp;}
        if(temp<min)
            {min=temp;}
    }
    
    printf("%lld %lld",min,max);
    
    
    return 0;
}
