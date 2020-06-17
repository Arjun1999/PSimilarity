#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    int n = arr_size,min,max;
    int result = 0;
    min = max= a[0];
    
   for(i=0;i<n;i++)
   {
       if(min<a[i])
           min=a[i];
       if(max>a[i])
           max=a[i];
       result+=arr[i];
   }
printf("\n%d %d",result-min,result-max);    
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
