#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int max,min,sum[10];
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum[0]=a+c+d+e;
    sum[1]=b+c+d+e;
    sum[2]=a+b+d+e;
    sum[3]=a+b+c+e;
    sum[4]=a+b+c+d;
    max=min=sum[0];
    for(int i=1;i<5;i++)
    {
        if(sum[i]>max)
            max=sum[i];
        else if(sum[i]<min)
            min=sum[i];
    }
        printf("%ld %ld",min,max);
    return 0;
}
