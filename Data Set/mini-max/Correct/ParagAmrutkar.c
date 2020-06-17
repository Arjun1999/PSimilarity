#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    /*long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);*/
    long int a[5], sum = 0, min = 0, max = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%ld",&a[i]);
        if(i == 0) {
            min = a[i];
            max = a[i];
        }
        else {
            if(min > a[i])
                min = a[i];
            if(max < a[i])
                max = a[i];
        }
        sum += a[i];
    }
    
    printf("%ld %ld",sum-max,sum-min);
    return 0;
}
