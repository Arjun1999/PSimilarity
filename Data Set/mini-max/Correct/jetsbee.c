#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define arr_length 5

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    
    long long int arr[5];
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    arr[4] = e;
    
    for(int i=0; i < arr_length; i++ ) {
        for(int j=0; j < arr_length-1; j++) {
            if(arr[j] > arr[j+1]) {
                long int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("%lld %lld", arr[0]+arr[1]+arr[2]+arr[3], arr[1]+arr[2]+arr[3]+arr[4]);
    
    return 0;
}
