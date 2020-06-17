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
    long int min=0,max=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int sum=a+b+c+d+e;
   long int arr[5];
    arr[0]=sum-a;
    arr[1]=sum-b;
    arr[2]=sum-c;
    arr[3]=sum-d;
    arr[4]=sum-e;
    min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    printf("%ld ""%ld",min,max);
    return 0;
}
