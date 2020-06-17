#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5], sum = 0, sum_of_four[5] = {0}; 
    int i;
    
    for (i = 0; i < 5; i++)
        scanf ("%ld", &a[i]);
    
    for (i = 0; i < 5; i++)
        sum += a [i];
    
    for (i = 0; i < 5; i++)
        sum_of_four [i] = sum - a[i];
    
    int min = 0, max = 0;
    for (i = 1; i < 5; i++)
    {
        if (sum_of_four [i] < sum_of_four [min])
            min = i;
        if (sum_of_four [i] > sum_of_four [max])
            max = i;
    }
    
    printf ("%ld %ld\n", sum_of_four [min], sum_of_four [max]);
    return 0;
}
