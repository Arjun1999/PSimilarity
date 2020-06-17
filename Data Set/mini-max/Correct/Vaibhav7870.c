#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],b[5],temp=0,min=0,max=0;
    for(int i=0;i<5;i++){
        scanf("%ld",&a[i]);
        temp=temp+a[i];
    }
    for(int i=0;i<5;i++){
        b[i]=temp-a[i];
    }
    min=max=b[0];
    for(int i=1;i<5;i++){
        if(b[i]>max){
            max=b[i];
        }
        if(b[i]<min){
            min=b[i];
        }
    }
    printf("%ld %ld",min,max);
    return 0;
}
