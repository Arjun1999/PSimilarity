#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int sum(int arr[], int n)
{
    int sum = 0; // initialize sum
    int i;
 
    // Iterate through all elements and add them to sum
    for (i = 0; i < n; i++)
       sum +=  arr[i];
 
    return sum;
}
int main() {
    int *arr = malloc(sizeof(int) * 5),n;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       int q = sum(arr,n);
        printf("%d",q);
    }
    
    return 0;
}
