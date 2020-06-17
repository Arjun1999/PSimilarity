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
    long int arr[5];
    long int minsum = 0;
    long int maxsum = 0;
    int i, j, temp;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    arr[4] = e;
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < (5 - i - 1); j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < 4; i++){
        minsum = minsum + arr[i];
    }
    for(i = 1; i < 5; i++){
        maxsum = maxsum + arr[i];
    }
    
    printf("%ld %ld",minsum,maxsum);
    return 0;
}
