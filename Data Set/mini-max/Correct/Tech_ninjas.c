#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
 long long    int a; 
    long long int b; 
    long long  int c; 
   long long  int d;
   long long   int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int sum1,sum2,sum3,sum4,sum5,greatest, least,i ;
    long long int arr [5]={(b+c+d+e),(a+c+d+e),(a+b+d+e),(a+b+c+e), (a+b+c+d)};
    
    greatest =arr [0];
    for (i=0;i <5;i++)
    { 
        {
            if (arr[i]>greatest)
                greatest=arr [i];}
    }
    least=arr [0];
    for (i=0;i <5;i++)
    {
        {
            if (arr [i]<least)
                least=arr [i];}}
    printf ("%lld %lld",least,greatest );
    
    
    return 0;
} 
