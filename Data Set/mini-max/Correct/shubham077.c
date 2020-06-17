#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    int i,j,temp;
    long long int max=0;
    long long int min=0;
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(i=0;i<5;i++){
        for(j=i+1;j<=4;j++){
           if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
        }
    }
    for(i=0;i<4;i++){
        min=min+a[i];
    }
    
    for(i=1;i<5;i++){
        max=max+a[i];
    }
    printf("%lld %lld",min,max);
    return 0;
}
