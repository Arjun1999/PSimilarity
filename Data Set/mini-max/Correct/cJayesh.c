#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    /*long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e); */
    int i,n=5;
    long long int a[n],temp,min=0,max=0; 
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
        for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    
    for(i=1;i<n;i++)
        max+=a[i];
    for(i=0;i<n-1;i++)
        min+=a[i];
    printf("%lld %lld",min,max);
        
    return 0;
}
