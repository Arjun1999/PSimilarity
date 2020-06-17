#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    int i,n=5;
    long int min,max,sum=0;
    for(i=0;i<5;i++){
        scanf("%ld",&a[i]);
        if(i==0){
            min=a[i];
            max=a[i];
        }
        if(a[i]<min)min=a[i];
        if(a[i]>max)max=a[i];
        sum=sum+a[i];
    }
    long int max1=sum-min;
    long int min1=sum-max;
    printf("%ld %ld",min1,max1);
    return 0;
}
