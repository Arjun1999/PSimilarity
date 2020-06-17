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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int s[5], min, max;
    int i;
    
    s[0] = b + c + d + e;
    s[1] =  a + c + d + e;
    s[2] = a + b + d + e;
    s[3] = a + b + c + e;
    s[4] = a + b + c + d;
    
    min = s[0]; max = s[0];
    for(i = 1; i < 5; i++){
        if(s[i] < min){
            min = s[i];
        }
        
        if(s[i] > max){
            max = s[i];
        }
    }
    
    printf("%lld %lld", min, max);
    
    return 0;
}
