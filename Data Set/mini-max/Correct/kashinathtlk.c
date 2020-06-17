#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a[5],maxVal,minVal,total=0;
    int i;
    scanf("%lld",&a[0]);
    maxVal=a[0];
    minVal=a[0];
    total=a[0]+total;
    for(i=1;i<5;i++){
        scanf("%lld",&a[i]);
        if(maxVal<a[i])
            maxVal=a[i];
        if(minVal>a[i])
            minVal=a[i];
        total=total+a[i];
    }
    printf("%lld %lld",total-maxVal,total-minVal);
    return 0;
}