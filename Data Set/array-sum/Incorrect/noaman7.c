#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int sumArray(int *arr, int n)
{
    int Id, sum = 0;
    for(Id = 0 ; Id < n; Id++)
    {
        sum = sum + arr[Id];
    }
    return sum;
}

int main(){
    int n; 
    scanf("%d",&n);
    int *arr = (int *) malloc(sizeof(int)*n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    printf("Sum is %d", sumArray(arr, n));
    return 0;
}
