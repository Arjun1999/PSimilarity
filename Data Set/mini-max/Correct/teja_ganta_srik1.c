#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int A[5];
    A[0]=(a+b+c+d);
    A[1]=(a+b+c+e);
    A[2]=(a+b+d+e);
    A[3]=(a+c+d+e);
    A[4]=(b+c+d+e);
    long long int min=0,max=0;
    for(int i=0;i<5;i++)
        {if(A[i]>max)
           max=A[i];
        }
    min=A[0];
    for(int i=0;i<5;i++)
        {if(A[i]<min)
           min=A[i];
         
        }
    printf("%lld %lld",min,max);
    return 0;
}
