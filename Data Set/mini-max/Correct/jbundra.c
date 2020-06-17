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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    long int arr[5] = {a, b, c, d ,e};
    long int temp = 0;
    
    for(int i = 5; i > 0; i--){
        for(int j = 0; j < i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("%ld ", arr[0] + arr[1] + arr[2] + arr[3]);
    printf("%ld ", arr[4] + arr[1] + arr[2] + arr[3]);
    return 0;
}
