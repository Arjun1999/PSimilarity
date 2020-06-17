#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i, j, exclude_index = 0;
    long int max = 0, min = LONG_MAX;
    long int* arr = malloc(sizeof(long int) * 5);

    for (i = 0; i < 5; i++) {
       scanf("%ld", &arr[i]);
    }

    for (i = 0; i < 5; i++) {
        long int sum = 0;
        for (j = 0; j < 5; j++) {
            if (j != exclude_index) {
                sum += arr[j];
            }
        }

        if (sum < min) {
            min = sum;
        }
        if (sum > max) {
            max = sum;
        }

        exclude_index += 1;
    }
    printf("%ld %ld", min, max);
    return 0;
}