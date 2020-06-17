#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a[5],min,max,sum=0;
    for(int i=0;i<5;i++){
        scanf("%lld",&a[i]);
    }
    min = a[0];max = a[0]; sum +=a[0];
    for(int i=1;i<5;i++){
        if(max<a[i]){
            max=a[i];
        } else if(min>a[i]){
            min = a[i];
        }
        sum+=a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
