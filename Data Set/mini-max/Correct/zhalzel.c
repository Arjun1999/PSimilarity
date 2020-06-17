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
  
    long int total = a + b + c + d + e;
    
    long int max, min;
    max = min = a;
    
    long int nums[]={a,b,c,d,e};
    
    for (int i=0; i<5; i++){
        if (nums[i] < min){
            min = nums[i];
        }
        if (nums[i] > max){
            max = nums[i];
        }
    }
   
    printf("%ld %ld", total-max, total-min);
    
    return 0;
}
