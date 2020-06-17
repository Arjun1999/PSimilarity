#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    long long int ar[5];
    scanf("%lld %lld %lld %lld %lld",&ar[0],&ar[1],&ar[2],&ar[3],&ar[4]);
        
    
    long long int temp;
    
    for(int i = 0; i < 4; i++){
        for(int j = (1+i); j < 5; j++){
            if(ar[i] > ar[j]){
                temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
            }
        }
    }
    
    long long int min = ar[0] + ar[1] + ar[2] + ar[3];
    long long int max = ar[1] + ar[2] + ar[3] + ar[4];
    printf("%lld %lld", min, max);
    /*for(int i = 0; i < 5; i++){
        printf("%lld",ar[i]);
    }*/
    
    return 0;
}
