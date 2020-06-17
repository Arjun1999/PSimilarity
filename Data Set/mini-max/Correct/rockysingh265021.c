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
    int k=0;
    long int sum=0,sum1=0;
    int temp=0,j=0;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    for(k=0;k<5;k++)
        {
            for(j=k+1;j<5;j++)
                {
                    if(arr[k]>arr[j])
                        {
                            temp=arr[k];
                            arr[k]=arr[j];
                            arr[j]=temp;
                    }
            }
    }
    for(k=0;k<4;k++)
        {
            sum=sum+arr[k];
    }
    for(k=1;k<5;k++)
        {
            sum1=sum1+arr[k];
    }
    long int max,min;
    max=sum;
    min=sum1;
    printf("%lld %lld",max,min);
    return 0;
}
