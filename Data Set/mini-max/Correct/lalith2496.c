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
    long int maxsum=0;
    long int minsum=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int arr[5]={a,b,c,d,e};
    long int min=0,max=0;
     for(int i=1;i<5;i++)
    {
       if(arr[i]>arr[max])
           max=i;
    }
    for(int i=0;i<5;i++)
    {
        if(i!=max)
        minsum=minsum+arr[i];
    }
    printf("%lld ",minsum);
    for(int i=1;i<5;i++)
    {
       if(arr[i]<arr[min])
           min=i;
    }
    for(int i=0;i<5;i++)
    {
        if(i!=min)
        maxsum=maxsum+arr[i];
    }
    printf("%lld",maxsum);
   
    return 0;
}
