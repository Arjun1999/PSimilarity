#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the miniMaxSum function below.
void miniMaxSum(int arr_count, int* arr) {
    long int minsum = 0, maxsum = 0;
    int minIndex;

    for(int i = 0; i < 1; i++)
    {
        
        for (int j = 0; j < arr_count; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    minIndex = 0;
    for (int i = 0; i < 1; i++)
    {
        
        for (int j = 1; j < arr_count; j++)
        {
            if (arr[minIndex] > arr[j])
                minIndex = j;
        }
    }
       
    for(int i = 0; i < arr_count; i++)
    {
        if (i < arr_count - 1) minsum+=arr[i];
        if (i != minIndex) maxsum+=arr[i];
    }
    printf("%d %d", minsum, maxsum);
}

int main()
{
    int a[] = {7,69, 2, 221, 8974};
    int len = sizeof(a)/sizeof(a[0]);
    miniMaxSum(len, a);
}