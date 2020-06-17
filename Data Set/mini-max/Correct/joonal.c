#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5], mini, maxi, sum[5];
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    sum[0]=a[1]+a[2]+a[3]+a[4];
    sum[1]=a[0]+a[2]+a[3]+a[4];
    sum[2]=a[1]+a[0]+a[3]+a[4];
    sum[3]=a[1]+a[2]+a[0]+a[4];
    sum[4]=a[1]+a[2]+a[3]+a[0];
    maxi=sum[0];
    mini=sum[0];
    for (int i=1; i<5; i++) {
        if (sum[i]>maxi) {
            maxi=sum[i];
        } if (sum[i]<mini) {
            mini=sum[i];
        }
    } printf("%lld %lld\n", mini, maxi);
    return 0;
}
