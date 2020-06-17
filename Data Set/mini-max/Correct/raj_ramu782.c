#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]={0},t=0;
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    
    short i,j,k;
    
    for(i=0;i<5;i++)
    {
        for(k=j=i;j<4;j++)
        {
            if(a[k]<a[j+1]) continue;
            else k=j+1;
        }
        t=a[i]; a[i]=a[k] ; a[k]=t;
    }
    printf("%lld %lld",a[0]+a[1]+a[2]+a[3],a[1]+a[2]+a[3]+a[4]);

    return 0;
}
