#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmp(const void *a, const void *b)
{
    return (*(long*)a - *(long*)b);
}

int main(){
    long int min; 
    long int max;
    
    long int numbers[5];
    
    scanf("%ld %ld %ld %ld %ld", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);

    qsort(numbers, 5, sizeof(long), cmp);

    for (int i = 0; i < 4; i++) {
        min += numbers[i];
    }

    for (int i = 1; i < 5; i++) {
        max += numbers[i];
    }

    printf("%ld %ld", min, max);
    
    return 0;
}
