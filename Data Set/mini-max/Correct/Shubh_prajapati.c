#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *a = malloc(sizeof(int) * 5);
    long sum=0, min=0, max=0;
    for(int i = 0; i < 5; i++){
       scanf("%d",&a[i]);
        sum+=a[i];
        if(min==0)
            min=a[i];
        else
        {
            if(a[i]<min)
                min=a[i];
        }
        if(max==0)
        {
            max=a[i];
        }
        else
        {
            if(a[i]>max)
                max=a[i];
        }
    }
    printf("%ld %ld", sum-max, sum-min);
    return 0;
}
