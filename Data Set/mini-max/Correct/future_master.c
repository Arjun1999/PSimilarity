#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    int i;
    long sum=0,min,max;
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    min=a[0];
    max=a[0];
    for(i=0;i<5;i++)
        {
        if(a[i]>=max)
            max=a[i];
        else if(a[i]<=min)
            min=a[i];
            sum+=a[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
