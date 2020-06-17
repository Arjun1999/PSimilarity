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
    int i,j;
    long int sum[5],swap;
    sum[0]=b + c + d + e;
    sum[1]=a + c + d + e;
    sum[2]=a + b + d + e;
    sum[3]=a + b + c + e;
    sum[4]=a + b + c + d;
    for(i=0;i<5;i++)
        {
        for(j=i+1;j<5;j++)
            {
        if(sum[i] > sum[j])
            {
       swap=sum[i];
        sum[i]=sum[j];
    sum[j]=swap;
        }
    }
}
    printf("%ld %ld",sum[0],sum[4]);
    return 0;
}
