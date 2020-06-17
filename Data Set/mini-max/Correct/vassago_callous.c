#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5]; 
    long long int sum[5],tmp; 
    //long int c; 
    //long int d;
    //long int e;
    int i,j;
    for(i=0;i<5;i++)
    scanf("%lld",&a[i]);
    for(i=0;i<5;i++)
        sum[i]=0;
    for(i=0;i<5;i++)
      { for(j=0;j<5;j++)
        {if(i!=j)
        {sum[i]=a[j]+sum[i];}}
      }
    for(i=0;i<5;i++)
    {for(j=i+1;j<5;j++)
    {if(sum[i]>sum[j])
    {tmp=sum[i];sum[i]=sum[j];sum[j]=tmp;}}}
    printf("%lld %lld",sum[0],sum[4]);
    return 0;
}
