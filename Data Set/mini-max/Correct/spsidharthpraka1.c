#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    for(int i=0;i<5;i++)
        scanf("%lld",&a[i]);
    int max,min,sum;
    max=min=sum=a[0];
    for(int i=1;i<5;i++){
        sum+=a[i];
        if (a[i]>max) max=a[i];
        if (a[i]<min) min=a[i];
    }
    printf("%lld %lld",(sum-max),(sum-min));
    return 0;
}
