#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void findMinMax(long long int*);
int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    long long int result[5]; 
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);

    result[0] = a + b + c + d;
    result[1] = a + b + c + e;
    result[2] = a + b + d + e;
    result[3] = a + c + d + e;
    result[4] = b + c + d + e;

    findMinMax(result);
    return 0;
}

void findMinMax(long long int* result){
    long long int min = result[0];
    long long int max = result[0];
    int i = 0;
    while(i<5){
        if(min > result[i] ){
            min = result[i];
            i++;
        }else if(result[i] > max){
            max = result[i];
            i++;
        }else{
            i++;
        }
    }
    
    printf("%lld %lld", min, max);
}
