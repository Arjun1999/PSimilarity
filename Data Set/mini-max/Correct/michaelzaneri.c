#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void     solve_dat(int* arr)
{
 long long int large = 0;
 long long int small = arr[0];
 long long int total = 0;
 int i = 0;
 while (i < 5)
 {
   if (large < arr[i])
      large = arr[i]; 
   if (small > arr[i])
      small = arr[i];
   total = total + arr[i];
   i++;
 }
 printf("%lli", total - large);
 printf(" ");
 printf("%lli", total - small);
}


int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    solve_dat(arr);
    return 0;
}
