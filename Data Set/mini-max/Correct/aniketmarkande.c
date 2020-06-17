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
    long int array[5];
    long int min = 0;
    long int max = 0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    array[0] = a+b+c+d;
    array[1] = b+c+d+e;
    array[2] = a+c+d+e;
    array[3] = a+b+d+e;
    array[4] = a+b+c+e;
        
    min = array[0];
    for(int i=1; i<5; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    
    max = array[0];
    for(int i=1; i<5; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    
    printf("%ld %ld", min, max);
    return 0;
}
