#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *arr = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
      for(int i=0;i<5;i++)
      {
          for(int j=i+1;j<5;j++)
          {
              if(arr[i]>arr[j])
              {
                  int y=arr[j];
                  arr[j]=arr[i];
                  arr[i]=y;
              }
          }
      }
      printf("%ld %ld",(arr[0]+arr[1]+arr[2]+arr[3]),(arr[1]+arr[2]+arr[3]+arr[4]));
    return 0;
}
