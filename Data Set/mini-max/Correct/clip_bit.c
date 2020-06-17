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
    int size = 4;
    long int max = 0;
    long int sum = 0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int enumerated_vars [5] = {a,b,c,d,e};
    
    long int min = 40000000000; //set to maximum possible value
    
    for (int i = 0; i < (size + 1); i++) {
        for (int q = 0; q < (size + 1); q++){
            if (q != i){
                sum = sum + enumerated_vars[q];
            }
        }
        // check if new min or max
        if (sum < min) {
            min = sum;
        } 
        if (sum > max) {
            max = sum;
        }
        sum = 0;
    }
    printf("%lld %lld", min, max);
    return 0;
}
