#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    unsigned long arr[5]; //reading
    unsigned long sum[5];
    unsigned long max = 0L;
    unsigned long min = 0L-1;

    //input array reading
    for(int i = 0; i < 5; i++){
       scanf("%ld",&arr[i]);
       sum[i] = 0;  //initialize
    }

    for(int i = 0; i < 5; i++)
      for(int j = 0; j < 5; j++)
        if(j != i)
          sum[i] += arr[j];

    //find max and main
    for(int i=0;i<5;i++){
      if(sum[i] > max)
        max = sum[i];
      if(sum[i] < min)
        min = sum[i];
    }


    printf("%lu %lu",min, max);
    //scanf("%d",&n);
    return 0;
}
