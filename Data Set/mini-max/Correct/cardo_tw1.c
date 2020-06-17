#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long a[5],min=1000000001,max=0,sum=0;
    for(int i=0;i<5;i++){
    scanf("%lld",&a[i]);
        sum+=a[i];
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
           max=a[i];
    }
    printf("%lld %lld\n",sum-max,sum-min);
    return 0;
}
