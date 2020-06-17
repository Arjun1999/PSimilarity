#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int A[5];//using lld to include numbers of order 10^9
    for(int i=0;i<5;i++)
    {
        scanf("%lld",&A[i]);
    }    
    long long int sum1=0;
    for(int i=1;i<5;i++)
    {
        sum1=sum1+A[i];
    }
   long long int sum2=0;
    for(int i=0;i<5&&i!=1;i++)
    {
       sum2=sum2+A[i];
    }
    long long int sum3=0;
    for(int i=0;i<5&&i!=2;i++)
    {
        sum3=sum3+A[i];
    }
    long long int sum4=0;
    for(int i=0;i<5&&i!=3;i++)
    {
        sum4= sum4 +A[i];
    }
    long long int sum5= 0;
    {
        for(int i=0;i<5&&i!=4;i++)
        {
         sum5=sum5 + A[i];   
        }
    }
   long long int B[5]={sum1,sum2,sum3,sum4,sum5};
    long long int max=B[0],min=B[0];
    for(int i=0;i<5;i++)
    {
        if(max<B[i])
        {
            max=B[i];
        }
        if(min>B[i])
        {
            min=B[i];
        }
    }
    printf("%lld %lld",min,max);
}
