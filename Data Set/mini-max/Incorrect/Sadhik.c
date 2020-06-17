#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int sum=0,s=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
     for(int arr_i = 0; arr_i < 5; arr_i++){
      sum+=arr[arr_i-1];
    }
    printf("%d",sum);
     for(int arr_i = 0; arr_i < 5; arr_i++){
      s+=arr[arr_i];
    }
    printf(" %d",s-1);
    return 0;
}
