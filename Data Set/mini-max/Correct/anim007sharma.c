#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e,t,arr[5],i,sum[5],max,min;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    t=a+b+c+d+e;
    for(i=0; i<5; i++)
        {
        sum[i]=t-arr[i];
    }
    max=sum[0];
    min=sum[0];
    for(i=1; i<5; i++)
        {
        if(sum[i]>max)
            {
            max=sum[i];
        }
    }
    for(i=1; i<5; i++)
        {
        if(sum[i]<min)
            {
            min=sum[i];
        }
    }
    printf("%ld %ld", min, max);
    return 0;
}
