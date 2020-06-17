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
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int arr[]={a,b,c,d,e};
    int i,j;
    long long int t,max=0,min=0;
    for(i=0;i<5;i++)
        {
        for(j=0;j<5-i-1;j++)
            {
            if(arr[j]>arr[j+1])
                {
             t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    max=arr[1]+arr[2]+arr[3]+arr[4];
    min=arr[0]+arr[1]+arr[2]+arr[3];
    printf("%lld %lld",min,max);
    return 0;
}
