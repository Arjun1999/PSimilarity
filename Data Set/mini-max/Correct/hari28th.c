#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    for (int i=0; i<5; i++){
        scanf("%ld", &a[i]);
    }
    long int min=2147483647; 
    long int max=0;
    for (int j=0; j<5; j++){
        if (a[j]<min){
            min=a[j];
        }
        if (a[j]>max){
            max=a[j];
        }
    }
    long int sum;
    long int MIN;
    long int MAX;
    sum=a[0]+a[1]+a[2]+a[3]+a[4];
    MIN=sum-max;
    MAX=sum-min;
    printf ("%ld %ld", MIN, MAX);
    return 0;
}
