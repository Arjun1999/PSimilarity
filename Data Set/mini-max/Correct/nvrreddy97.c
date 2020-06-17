#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],min=0,max=0,j,t,i; 
    for(i=0;i<5;i++)
    scanf("%lld",&a[i]);
    for(i=0;i<4;i++)
        for(j=i+1;j<5;j++)
         if(a[i]>a[j]){
          t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(j=0;j<5;j++){
     if(j!=4)   min+=a[j];
     if(j!=0)   max+=a[j];
    }    
    printf("%lld %lld",min,max);
    return 0;
}
