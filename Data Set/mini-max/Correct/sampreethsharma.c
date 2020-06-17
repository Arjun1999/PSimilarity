#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   int i,j;
    long max,min,sum=0,maxs=0,mins=0;
    int a[5];
    for( i=0;i<5;i++){
        scanf("%ld",&a[i]);
        sum=sum+a[i];
    }
   max=a[0];
    min=a[0];
        for(i=0;i<5;i++){
            if(a[i]>max){
                max=a[i];
            }
            if(a[i]<min){
                min=a[i];
            }
        }
    
maxs=sum-min;
    mins=sum-max;
    
   
    printf("%ld %ld",mins,maxs);
    return 0;
}
