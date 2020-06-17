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
    long int sum = a+b+c+d+e;
    long int arr[5] = {a,b,c,d,e};
    long int max = 0;
    long int min = sum;
    for(int i=0;i<5;i++){
        if(max <= (sum - arr[i]))
            max = sum - arr[i];
        if(min >= (sum - arr[i]))
            min = sum - arr[i];
        
    }
    printf("%ld %lld",min,max);
    
    return 0;
}
