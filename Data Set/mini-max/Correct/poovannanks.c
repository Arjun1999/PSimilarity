#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef unsigned long long int ll;
int main() {
    ll sum[5]={0}, min = 1e10, max = 0, i;
    ll *arr = malloc(sizeof(ll) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    for(int arr_i=0;arr_i<5;arr_i++){
        for(int arr_j=0;arr_j<5;arr_j++){
            if(arr_j!=arr_i)
                sum[arr_i]+=arr[arr_j];
        }
    }
  for (i = 0; i < 5; ++i) {
       if(sum[i] < min){
           min = sum[i];
       }
      if(sum[i] > max){
          max = sum[i];
      }
  }
    printf("%lld %lld",min,max);    
    return 0;
}
