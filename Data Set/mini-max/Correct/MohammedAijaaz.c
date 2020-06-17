#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long a[5],i,j,t,max=0,min=0;
    for(i=0;i<5;i++){
        scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
            if(a[i]>a[j]){
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for(i=0;i<5;i++){
        if(i<=3){
            min += a[i];
        }
        if(i>0){
            max += a[i];
        }
    }
    printf("%ld %ld",min,max);
    return 0;
}
