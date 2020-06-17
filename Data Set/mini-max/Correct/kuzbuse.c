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
    long int max,min;
    int i;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int arr[5]={a,b,c,d,e};
    max=min=arr[0];
    for(i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    
    long int sum= a+b+c+d+e;
    printf("%ld %ld",sum-max,sum-min);
    
    
    
    
    
    
    
    return 0;
}
