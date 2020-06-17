#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   unsigned long long int sum=0;
    int i=0;
    unsigned long long int *a = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&a[arr_i]);
    }
    int p;
    for(p=0;p<5;p++){
        for(int i=p+1;i<5;i++){
        if(a[p]>a[i]){
            int c;
            c=a[p];
            a[p]=a[i];
            a[i]=c;    
    }  
    }
    }
    unsigned long long int max=0;
    unsigned long long int  min=0;
        
    for(int j=0;j<4;j++)
        min=min+a[j];
    for(int l=1;l<5;l++) 
        max=max+a[l];
    printf("%lld %lld",min,max);
    return 0;
}

