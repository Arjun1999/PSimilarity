#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *a = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&a[arr_i]);
    }
    int min=a[0];
    int max=a[0];
    long sum=0;
    for(int i=0;i<5;++i)
    {
        sum+=a[i];
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
