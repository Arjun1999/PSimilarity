#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    /*long int b; 
    long int c; 
    long int d;
    long int e;*/
    long int sum = 0;
    long int max, min;
    scanf ("%ld", &a[0]);
    max = a[0];
    min = a[0];
    sum = a[0];
    for (int i = 1; i <= 4; i++){
        scanf ("%ld", &a[i]);
        if (max < a[i]){
            max = a[i];
        } else if (min > a[i]){
            min = a[i];
        }
        sum = sum + a[i];
    }
    printf("%ld %ld", sum - max, sum - min);
    return 0;
}
