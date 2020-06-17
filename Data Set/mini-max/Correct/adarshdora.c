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
    long int max,min,temp;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int ar[5];
    ar[0]=a;
    ar[1]=b;
    ar[2]=c;
    ar[3]=d;
    ar[4]=e;
    for(int i=0;i<4;i++)
        {
        for(int j=i+1;j<5;j++)
            {
            if(ar[i]>ar[j])
                {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    min=ar[0]+ar[1]+ar[2]+ar[3];
    max=ar[4]+ar[3]+ar[2]+ar[1];
    printf("%lld %lld",min,max);
    return 0;
}