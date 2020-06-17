#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long sum=0;
    long max=0,min;
    for(int i=0;i<5;i++){
       
        scanf("%li",&a[i]);
         if(i==0){
            min=a[i];
        }
        sum=sum+a[i];
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%li %li",sum-max,sum-min);
    return 0;
}
