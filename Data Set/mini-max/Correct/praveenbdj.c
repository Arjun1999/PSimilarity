#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long a[5];
    long min=LONG_MAX,max=0,sum=0;
    for(int i=0;i<5;i++)
        {
        scanf("%ld",&a[i]);
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        sum+=a[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
