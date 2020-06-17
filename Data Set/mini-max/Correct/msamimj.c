#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long num[5], sum = 0;
    int i;
    for(i=0;i<5;i++){
        scanf("%lld",&num[i]);
        sum += num[i];
    }
    long long int min=num[0], max=num[0];
    for(i=1; i<5; i++){
        if(num[i]>max){
            max = num[i];
        }
        if(num[i]<min){
            min = num[i];
        }
    }
    printf("%lld %lld",sum-max, sum-min );
    return 0;
}
