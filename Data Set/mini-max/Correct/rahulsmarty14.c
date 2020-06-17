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
    long int temp;
    long int min = 0, max = 0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    arr[4] = e;
    
    for(int i = 0; i < 5; i++) {
        for (int j = i; j < 5; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < 5; i++) {
        if (i < 4) {
            min = min + arr[i];
        }
        
        if (i > 0) {
            max = max + arr[i];
        }
    }
    
    printf("%ld %ld", min, max);
    
    return 0;
}
