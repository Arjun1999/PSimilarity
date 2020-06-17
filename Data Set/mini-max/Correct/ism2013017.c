#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a, min, max, sum;
     scanf("%lld", &a);
    min = max = sum = a;
    
    for(int i=1; i<5; i++){
        scanf("%lld", &a);
        sum += a;
        if(a < min){
            min = a;
        }
        if(a > max){
            max = a;
        }
    }
    printf("%lld %lld", sum - max, sum - min);
    return 0;
}
