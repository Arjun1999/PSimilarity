#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int f; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&f,&b,&c,&d,&e);
    long int sum=0,min,max,minsum,maxsum; 
    long int a[5];
    a[0]=f;
    a[1]=b;
    a[2]=c;
    a[3]=d;
    a[4]=e;
    for (int i=0;i<5;i++)
        {
        sum=sum+a[i];
    }
    min=a[0];
    max=a[0];
    for (int j=1;j<5;j++)
        {
        if (a[j]<min)
            min=a[j];
        if (a[j]>max)
            max=a[j];
    }
    minsum=sum-max;
    maxsum=sum-min;
    printf("%ld %ld",minsum,maxsum);
    return 0;
}
