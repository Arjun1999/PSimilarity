#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long int inputs[5]; 
    scanf("%lu %lu %lu %lu %lu",&inputs[0], &inputs[1], &inputs[2], &inputs[3], &inputs[4]);
    unsigned long int min = inputs[0], max = inputs[0];
    unsigned long long int total = 0;
    for (int i = 1; i < 5; i++) {
        if (min > inputs[i]) {
            min = inputs[i];
        } else if (max < inputs[i]) {
            max = inputs[i];
        }
    }
    for (int i = 0; i < 5; i++) {
        total += inputs[i];
    }
    printf ("%llu %llu", total - max, total - min);
    return 0;
}
