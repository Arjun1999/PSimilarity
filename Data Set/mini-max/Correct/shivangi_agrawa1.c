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
    long int arr[5];
    long int max=0,min=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int sum=0;
    sum=a+b+c+d+e;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    min=sum-arr[0];
    for(int i=0;i<5;i++)
        {
       if(min>(sum-arr[i]))
           min=sum-arr[i];
        if(max<(sum-arr[i]))
            max=sum-arr[i];
       }
    printf("%lld ",min);
    printf("%lld ",max);
    return 0;
}
