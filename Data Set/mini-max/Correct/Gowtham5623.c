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
    long int e,arr[5],temp,s1,s2;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    for(int i=0;i<5;i++)
       for(int j=0;j<4;j++)
        if(arr[i]>arr[j])
    {temp=arr[i];
            arr[i]=arr[j];
     arr[j]=temp;}
    for(int i=0;i<4;i++)
        s1=s1+arr[i];
    for(int i=1;i<5;i++)
        s2=s2+arr[i];
    printf("%ld %ld",s2,s1);
    return 0;
}
