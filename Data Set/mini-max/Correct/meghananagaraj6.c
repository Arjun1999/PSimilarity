#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int arr[5],res[5],min,max;
    long int sum=0,i,j,k;
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    for(i=0;i<5;i++)
        {
        for(j=0;j<5;j++)
            {
        if(j!=i)
            sum=sum+arr[j];
        }
        res[i]=sum;
        sum=0;
    }
    min=res[0];
    for(i=0;i<5;i++)
        {
        if(res[i]<min)
            min=res[i];
        else
            ;
    }
    printf("%lld",min);
    printf(" ");
    max=res[0];
    for(i=0;i<5;i++)
        {
        if(res[i]>max)
            max=res[i];
        else
            ; 
    }
    printf("%lld",max);
    return 0;
} 
