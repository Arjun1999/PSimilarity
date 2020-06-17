#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int max=0,min=1000000000,sum=0;
    int *a = malloc(sizeof(int) * 5);
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
        sum+=a[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
