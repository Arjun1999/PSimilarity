#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long long a[5];
    long long i,j,k,p;
    for(i=0;i<5;i++){
        scanf("%lld",&a[i]);
        
    }
    for(i=0;i<5;i++){
        for(j=0;j<4-i;j++){
if(a[j+1]>a[j]){
    p=a[j+1];
    a[j+1]=a[j];
    a[j]=p;
    
    
    
}}
    }
    long long max=0,min=0;
    for(i=0;i<4;i++)
        max=max+a[i];
    for(i=4;i>=1;i--)
        min+=a[i];
    printf("%lld %lld",min,max);
    
    
    
    
    
}
