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
    
    int n = 5;
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(arr[j] > arr[j+1]){
                long int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    long int min = arr[0] + arr[1] + arr[2] + arr[3];
    long int max = arr[1] + arr[2] + arr[3] + arr[4];

    printf("%lld %lld", min, max);
    
    return 0;
}
