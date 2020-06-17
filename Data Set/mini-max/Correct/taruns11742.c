#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    long int temp;
    long int max=0;
    long int min=0;
    for(int i=0;i<5;i++){
        scanf("%ld",&a[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        if(a[i]<=a[j]){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    }
     for(int i=0;i<4;i++){
      min=min+a[i];
     }
    for(int i=1;i<5;i++){
        max=max+a[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
