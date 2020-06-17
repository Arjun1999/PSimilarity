#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j;
    long int t;
    long long int min=0,max=0;
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int arr[5];
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
        {
        if(arr[i]>arr[j])
            {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    for(i=0;i<4;i++)
        {
        min=min+arr[i];
        max=max+arr[i+1];
    }
    printf("%lld %lld",min,max);
    return 0;
}
