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
    long int sum[5],i,max=0,min=99999999999;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
sum[1]=a+b+c+d;
    sum[2]=a+b+c+e;
    sum[3]=a+b+d+e;
    sum[4]=a+c+d+e;
    sum[0]=b+c+d+e;
    for(i=0;i<5;i++)
        {
        if(sum[i]>max)
            max=sum[i];
        if(sum[i]<min)
            min=sum[i];}
        printf("%ld %ld",min,max);
    
    return 0;
}
