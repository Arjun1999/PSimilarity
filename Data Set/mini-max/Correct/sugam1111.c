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
    long int e,sum[5];
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum[0]=a+b+c+d;
    sum[1]=a+b+c+e;
    sum[2]=a+b+e+d;
    sum[3]=a+e+c+d;
    sum[4]=e+b+c+d;
    long int max=sum[0],min=sum[0];
    for(int i=0;i<5;i++){
        if(sum[i]>max)
            max=sum[i];
        else if(sum[i]<min)
            min=sum[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
