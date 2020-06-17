#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int a[5],min,max,sum1=0;
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    if(i==0)
    {
        min=a[i];
    max=a[i];
    }
    else
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    if(a[i]>max)
    {
        max=a[i];
    }
    }
    sum1+=a[i];
    }
     
    printf("%ld %ld",sum1-max,sum1-min);
    return 0;
}
