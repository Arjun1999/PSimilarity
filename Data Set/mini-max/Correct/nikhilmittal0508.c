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
    long int sum[5];
    sum[0]=a+b+c+d;
    sum[1]=b+c+d+e;
    sum[2]=c+d+e+a;
    sum[3]=d+e+a+b;
    sum[4]=a+b+c+e;
    int i,j;
    //printf("%li",sum[]);
    for(i=0;i<4;i++)
        {
        for(j=i+1;j<5;j++)
            {
            if(sum[i]<sum[j])
                {
                long int temp=sum[i];
                sum[i]=sum[j];
                sum[j]=temp;
            }
        }
    }
    printf("%li %li",sum[4],sum[0]);
    return 0;
}
