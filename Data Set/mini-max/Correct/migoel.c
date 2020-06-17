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
    long int ar[5];
    long double temp;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    ar[0]=b+c+d+e;
    ar[1]=a+c+d+e;
    ar[2]=a+b+d+e;
    ar[3]=a+b+c+e;
    ar[4]=a+b+c+d;
    for(int i=0;i<5;i++)
        {
         for(int j=0;j<5-i-1;j++)
             {
             if(ar[j]>ar[j+1])
                 {
                 temp=ar[j];
                 ar[j]=ar[j+1];
                 ar[j+1]=temp;
             }
         }
    }
    printf("%lld %lld",ar[0],ar[4]);
    
    return 0;
}
