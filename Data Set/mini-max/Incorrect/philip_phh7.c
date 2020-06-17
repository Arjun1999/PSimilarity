#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(void) {
    int array[5];
    long sum = 0, min = 1, max = 1;
    int i;
    for (i=0; i<5; i++) {
        scanf("%d", &array[i]);
    }
    for (i=0; i<5; i++) {
        sum = sum + array[i];
        if (array[i] < min) {min = array[i];}
        if (array[i] > max) {max = array[i];}
    }
    printf("%ld %ld\n", sum - max, sum - min);
    
    return 0;
}
