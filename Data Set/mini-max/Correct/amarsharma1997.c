#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],min=1000000001,max=0,sum=0;
    int i;
    for(i=0;i<5;i++)
        {
        scanf("%ld",&a[i]);
        if(a[i]<min)
            {
            min=a[i];
        }
        if(a[i]>max)
            {
             max=a[i];   
        }
        sum+=a[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
