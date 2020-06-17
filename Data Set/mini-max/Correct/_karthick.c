#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e,min,max;
    long long int arr[5],i;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    arr[0]=a+b+c+d;
    arr[1]=b+c+d+e;
    arr[2]=a+c+d+e;
    arr[3]=a+b+d+e;
    arr[4]=a+b+c+e;
    min=arr[0];
    max=arr[0];
    for(i=0;i<5;i++)
    {
        if(min>arr[i])
            min=arr[i];
        if(max<arr[i])
            max=arr[i];
    }
    printf("%lld %lld",min,max);
    return 0;
}

