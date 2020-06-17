#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sum_four(int a, int b, int c, int d)
{
    return (a+b+c+d);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    long int biggest = 0;
    long int smallest = 0;
    long int biggest_add = 0;
    long int smallest_add = 0;
    
    for (int i = 0; i < 5; ++i)
    {
        if (arr[i] > biggest)
            biggest = arr[i];
    }
    for (int i = 0; i < 5; ++ i)
    {
        if (i == 0)
            smallest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    for (int j = 0; j < 5; ++j)
        biggest_add += arr[j];
    biggest_add -= smallest;
    for (int k = 0; k < 5; ++k)
        smallest_add += arr[k];
    smallest_add -= biggest;
    printf("%ld %ld\n", smallest_add, biggest_add);
    return 0;
}
