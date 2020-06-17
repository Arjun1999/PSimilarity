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
    int i;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int  A[5];
  
             A[0]=a;
             A[1]=b;
             A[2]=c;
             A[3]=d;
             A[4]=e;

    for( i=0;i<5;i++)
        {
        for(int j=0;j<5-i-1;j++)
            {
            if(A[j]>=A[j+1])
                {
                long int i;
                i=A[j];
                A[j]=A[j+1];
                A[j+1]=i;
            }
            }
    }
        long int max,min;
        max=min=0;
         for(i=1;i<5;i++)
        { 
             max=max+A[i];
        }
           for(i=0;i<4;i++)
        { 
             min=min+A[i];
        }
    printf("%lld %lld",min,max);
    
  
    return 0;
}
