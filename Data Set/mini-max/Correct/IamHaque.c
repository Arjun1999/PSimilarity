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
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int arr[5];
    arr[0]=b+c+d+e;
    arr[1]=a+c+d+e;
    arr[2]=a+b+d+e;
    arr[3]=a+b+c+e;
    arr[4]=a+b+c+d;
    long int min=arr[0], max=arr[0];
    for(int i=0; i<5; i++)
    {
        if(min > arr[i])
            min = arr[i];
        if(max < arr[i])
            max = arr[i];
    }
    printf("%lld %lld", min, max);
    return 0;
}
