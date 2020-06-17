#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int max, min;
    long int sum_max = 0, sum_min = 0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);

    long int arr[] = {a,b,c,d,e};
    max = arr[0];
    min = arr[0];
    for(int i = 0; i < 4; i++){
      
      if(max < arr[i+1]){
        max = arr[i+1];
      }
      if(min > arr[i+1]){
        min = arr[i+1];
      }
    }
    sum_min = a + b + c + d + e - max;
    sum_max = a + b + c + d + e - min;
    printf("%ld %ld", sum_min, sum_max);
    return 0;
}
