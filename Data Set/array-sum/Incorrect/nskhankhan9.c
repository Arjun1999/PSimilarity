#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,sum=0,i;
    printf("Enter the array size\n");
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        for(i=0; i<n; i++)
            sum = sum+arr[i];
    }
    printf("Sum+ = %d",sum);
    return 0;
}
