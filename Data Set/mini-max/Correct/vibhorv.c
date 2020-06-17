#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b,sum=0;
    long long int min=1000000000;
    long long int max=0;
    int a_i;
    for(a_i=0;a_i<5;++a_i){
        scanf("%lld",&a);
        if(a<min){
            min=a;
        }
        if(a>max){
            max=a;
        }
        sum+=a;
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
