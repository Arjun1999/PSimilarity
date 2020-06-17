#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[5],i,j,temp,k,l;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<4;i++){
        if(a[i]>a[i+1]){
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
        }
    }
    for(i=4;i>0;i--){
        if(a[i]<a[i-1]){
            temp=a[i-1];
            a[i-1]=a[i];
            a[i]=temp;
        }
    }
    long int sum=0;
    for(i=0;i<4;i++){
        sum=sum+a[i];
    }
    long int max=0;
    for(i=1;i<5;i++)
        max=max+a[i];
    printf("%ld %ld",sum,max);
    return 0;
}
