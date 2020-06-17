#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long *arr = malloc(sizeof(long) * 5);
    long sum = 0, min=0, max=0;
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
        scanf("%ld",&arr[arr_i]);
        if(arr_i)
        {
            int a = arr[arr_i];
            if(a<min)
                min = a;
            if(a>max)
                max = a;
        }
        else
        {
            min = arr[arr_i];
            max = arr[arr_i];
        }
        sum += arr[arr_i];
    }
    printf("%ld %ld\n",sum - max, sum - min);
    return 0;
}
