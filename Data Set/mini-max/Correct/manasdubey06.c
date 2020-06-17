#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    int i,j,t,min=0,max=0;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(j=0;j<4;j++)
        {
        for(i=0;i<4;i++)
            {
            if(a[i]<a[i+1])
                {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    max=a[0]+a[1]+a[2]+a[3];
    min=a[1]+a[2]+a[3]+a[4];
    printf("%lld\t%lld",min,max);
    return 0;
}
