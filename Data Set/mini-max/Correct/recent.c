#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int r; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&r,&b,&c,&d,&e);
    long long int a[5];
         a[0]=r;
    a[1]=b;
     a[2]=c;
  a[3]=d;
    a[4]=e;
    int i;
    int loc=0;
    long long int temp=a[0];
    long long int temp1=a[0];
    int loc1=0;
    long long int summi=0,summa=0;
    for(i=1;i<5;i++)
        {
        if(temp>a[i])
            {
            temp=a[i];
        loc=i;
        }}
   
    for(i=0;i<5;i++)
        {
        summi=summi+a[i];
    }

    
     for(i=1;i<5;i++)
        {
        if(temp1<a[i])
           { temp1=a[i];
        loc1=i;
           }}
   
    for(i=0;i<5;i++)
        {
        summa=summa+a[i];
    }
        summi=summi-a[loc1];
    summa=summa-a[loc];
    printf("%lld %lld",summi,summa);
    
    return 0;
}
