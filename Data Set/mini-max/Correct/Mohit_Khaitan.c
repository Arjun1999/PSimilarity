#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long int arr[5];
    
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    arr[4] = e;
    
    int i=0,j=0,temp;
    
    int sumMax=0,sumMin=0;
    
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(i=0;i<5;i++){
        sumMax = arr[4] + arr[3] + arr[2] + arr[1];
        sumMin = arr[0] + arr[1] + arr[2] + arr[3];
    }
    
    printf("%ld %ld", sumMin, sumMax);
    
    return 0;
}
