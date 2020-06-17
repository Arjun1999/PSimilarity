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
    int i;
    long long int max=a[0],min=a[0],s=0;
    for(i=0;i<5;i++){
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        s+=a[i];
    }
    printf("%lld %lld\n",s-max,s-min);
    return 0;
}
