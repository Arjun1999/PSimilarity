#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void sort(int *arr, int *arro)
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    
    for (i = 0; i < 5; i++)
    {
        arro[i] = arr[i];
    }
    
    for (i = 0; i < 5; i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if (arro[i] > arro[j])
            {
                tmp = arro[i];
                arro[i] = arro[j];
                arro[j] = tmp;
            }
        }
    }
    
    return;
}

void solve(int *arr)
{
    int sorted[5];
    long int min = 0;
    long int max = 0;
    int i = 0;
    
    sort(arr, sorted);
    
    for (i = 0; i < 4; i++)
    {
        min += (long int)sorted[i];
    }
    
    for (i = 4; i > 0; i--)
    {
        max += (long int)sorted[i];
    }
    
    printf("%ld %ld\n", min, max);
    
    return;
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    solve(arr);
    
    return 0;
}
