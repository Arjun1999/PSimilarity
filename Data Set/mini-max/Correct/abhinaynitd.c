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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int sum[5];
    sum[0]=b+c+d+e;
    sum[1]=a+c+d+e;
    sum[2]=a+b+d+e;
    sum[3]=a+b+c+e;
    sum[4]=a+b+c+d;
   long int max=sum[0];
    long int min=sum[0];
    for(int i=0;i<5;i++)
        {
        if(max<sum[i])
            max=sum[i];
        if(min>sum[i])
            min=sum[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
