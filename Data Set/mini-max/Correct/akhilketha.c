#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],min,sum=0,max;int i;
    for(i=0;i<5;i++){
    scanf("%ld",&a[i]);
        sum+=a[i];
    }
    min=max=a[0];
    for(i=1;i<5;i++){
    if(min>a[i])
        min=a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
