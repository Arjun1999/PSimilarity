#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int A[5],k,sum=0,sum2=0;
    int i,j,l;
    long int a,b,c,d;
    for(i=0;i<5;i++)
        {
        scanf("%lld",&A[i]);
    }
    for(i=0;i<4;i++)
        {
        for(j=0;j<4-i;j++)
            {
                if(A[j]>A[j+1])
                    {
                    k=A[j+1];
                    A[j+1]=A[j];
                    A[j]=k;
                }
            
        }
        
    }
    for(l=0;l<4;l++)
        {
        sum=sum+A[l];
    }
    for(l=1;l<5;l++)
        {
        sum2=sum2+A[l];
    }
    printf("%lld %lld",sum,sum2);
    return 0;
}
