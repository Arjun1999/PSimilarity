#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    scanf("%lld",&a[0]);
    long int min = a[0];
    long int max = a[0];
    long int sum = a[0];
    for(long int i = 1; i < 5 ; i++)
    {
        scanf("%lld",&a[i]);
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
        sum = sum + a[i];
    }
    printf("%lld %lld",sum - max,sum -min);
    return 0;
}
