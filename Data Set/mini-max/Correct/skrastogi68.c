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
    long long int ar[5],temp;
    int i,j;
    ar[0]=a;ar[1]=b;ar[2]=c;ar[3]=d;ar[4]=e;
    for(i=0;i<5;i++)
        {
        for(j=i+1;j<5;j++)
            {
            if(ar[i]>ar[j])
                {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    printf("%lld %lld",ar[0]+ar[1]+ar[2]+ar[3],ar[1]+ar[2]+ar[3]+ar[4]);
    return 0;
}
