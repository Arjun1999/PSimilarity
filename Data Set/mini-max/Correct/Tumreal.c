#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5], summax = 0, summin = 0;
    int i, j;
    for (i = 0; i < 5; i++)
        scanf("%ld", &a[i]);
    for (i = 0; i < 5; i++){
        for (j = 0; j < i; j++){
            if (a[i] > a[j]){
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    for (i = 1; i < 5; i++)
        summin = summin + a[i];
    for (i = 0; i < 4; i++)
        summax = summax + a[i];
    printf("%ld %ld", summin,summax);
    return 0;
}
