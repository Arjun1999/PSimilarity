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
    long int e,sum[5],temp;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum[0]=a+b+c+d;
    sum[1]=e+b+c+d;
    sum[2]=a+e+c+d;
    sum[3]=a+b+e+d;
    sum[4]=a+b+c+e;
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(sum[i]>sum[j])
            {
                temp=sum[i];
                sum[i]=sum[j];
                sum[j]=temp;
            }
        }
    }
    printf("%lld %lld",sum[0],sum[4]);
    return 0;
}
