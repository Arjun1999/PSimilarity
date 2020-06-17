#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* sortArray(int sizeArr, int* arr)
{
    int* sortPtr = arr;
    int flag;
    
    do
    {
        flag = 0;
        
        for(int i = 1; i < sizeArr; i++)
        {
            if(*sortPtr > *(sortPtr + 1))
            {
                int temp = *sortPtr;
                *sortPtr = *(sortPtr + 1);
                *(sortPtr + 1) = temp;
                flag = 1;
            }
            sortPtr = sortPtr + 1;
        }
        
        sortPtr = arr;
    } while(flag);
    
    return arr;
}

long int* minMaxValueCalculation(int sizeArr, int* arr)
{
    arr = sortArray(sizeArr, arr);
    long int* minMaxValues = malloc(sizeof(int) * 2);
    long int minValue = 0;
    long int maxValue = 0;
    
    for(int i = 0; i < sizeArr - 1; i++)
        minValue += *(arr + i);
    
    maxValue = minValue + (*(arr + (sizeArr-1)) - *arr);
    
    minMaxValues[0] = minValue;
    minMaxValues[1] = maxValue;
    return minMaxValues;
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    long int* minMaxValues = minMaxValueCalculation(5, arr);
    printf("%ld %ld", minMaxValues[0], minMaxValues[1]);
    return 0;
}
