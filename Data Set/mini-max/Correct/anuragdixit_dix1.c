#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long int i,min=0,sum=0,max=0,t;
    long int *a = malloc(sizeof(long int) * 5);
    for(i = 0;i < 5;i++){
       scanf("%ld",&a[i]);
    }
    min=a[0];max=a[0];
    for(i=0;i<5;++i){
    if(min>a[i]) min=a[i];
    if(max<a[i]) max=a[i];
    sum+=a[i];
    }
    t=max;
max=sum-min;
min=sum-t;
printf("%ld %ld",min,max);
    return 0;
}
