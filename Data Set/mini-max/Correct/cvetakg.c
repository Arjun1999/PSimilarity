#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long s[5];
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
       s[arr_i] = 0;
    }
    for(int arr_i = 0; arr_i < 5; arr_i++){
      for(int j=0; j<5; j++){
        if (j!=arr_i){s[j] += arr[arr_i];}
      }
    }
  long min = s[1];
  long max = s[1];
  for(int j=0; j<5; j++)
   {
     if (s[j]<min) {min=s[j];}
     if (s[j]>max) {max=s[j];}
  }
  
  printf("%ld %ld",min, max);
    return 0;
}
