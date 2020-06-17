#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *a = malloc(sizeof(int) * 5);
    int i,sum=0,max,min;
    for(i = 0; i < 5; i++){
       scanf("%d",&a[i]);
    }
    sum=a[1]+a[2]+a[3]+a[4]+a[0];
    max=a[0];
    min=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
