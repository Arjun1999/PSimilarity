#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int MaxSum = 0;
    long int MinSum = 0;
    long int temp = 0;
    long int a[5] = {0,};
    long int b[5] = {0,};
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            if(x != y){
                b[x] += a[y];
            }
        }
        if(x == 0)
            MinSum = b[x];
        
        if(b[x] > MaxSum){
            MaxSum = b[x];
        }
        if(b[x] < MinSum){
            MinSum = b[x];
        }
    }
    
    printf("%ld %ld", MinSum, MaxSum);
    
    return 0;
}
