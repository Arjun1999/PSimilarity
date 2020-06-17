#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){    
    long int arr[5], min_sum = 0, max_sum = 0;
    int min = 0, max = 0;
    
    for(int i = 0; i < 5; ++i)
    {
        scanf("%ld", arr+i);
    }

    for(int i = 1; i < 5; ++i)
    {
        if(arr[i] < arr[min])
            min = i;
        else if(arr[i] > arr[max])
            max = i;
    }

    for(int i = 0; i < 5; ++i)
    {
        if(i != max)
            min_sum += arr[i];

        if(i != min)
            max_sum += arr[i];
    }
    
    printf("%ld %ld", min_sum, max_sum);
    
    return 0;
}