#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void funct(int * arr)
{
    long int low = 0;
    long int high = 0;
    long int sum = 0;
    int i = 0;
    int j = 0;
    
    for(i = 0; i < 5; i++)
    {
       sum = 0;
       for(j = 0; j < 5; j++)
       {
           if(j != i)
           {
               sum += arr[j];
           }
       }
       if(i == 0)
       {
           low = sum;
           high = sum;
       }
       else
       {
           if(sum < low)
           {
               low = sum;
           }
           else if(sum > high)
           {
               high = sum;
           }
        }
    }
    printf("%li %li", low, high);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    funct(arr);
    
    return 0;
}
