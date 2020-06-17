#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int a[5],i,j,t,s=0,r=0;
    for(i=0;i<5;i++){
        scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<4;i++){
        s+=a[i];
        r+=a[i+1];
    }
    printf("%lld %lld",s,r);
    return 0;
}
