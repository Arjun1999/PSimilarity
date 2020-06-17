#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],i,j,min,smin=0,smax=0,temp; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    for(i=0;i<5;i++)
        scanf("%lld ",&a[i]);
    for(i=0;i<4;i++)
        {
        min =i;
        for(j=i+1;j<5;j++)
            {
            if(a[min]>a[j])
                min=j;
        }
        if(min!=i)
            {
            temp =a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<4;i++)
        smin=smin+a[i];
    smax=smin-a[0]+a[4];
    printf("%lld %lld",smin,smax);
    return 0;
}
