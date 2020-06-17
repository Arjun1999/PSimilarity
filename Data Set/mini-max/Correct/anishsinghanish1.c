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
    long int e,max=0,min1,max1,sum=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int n[5]={a,b,c,d,e};
    for(int i=0;i<5;i++)
        {
        if(n[i]>max)
            max=n[i];
    }
   long int min=a;
    for(int i=0;i<5;i++)
        {
        if(n[i]<min)
            min=n[i];
    }
    for(int i=0;i<5;i++)
        sum+=n[i];
    max1=sum-min;
    min1=sum-max;
    printf("%ld %ld",min1,max1);
        
    return 0;
}
