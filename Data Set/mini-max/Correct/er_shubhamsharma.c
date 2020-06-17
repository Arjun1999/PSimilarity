#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    long int asum[5],sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    for(int i=0;i<5;i++)
    {
        asum[i]=sum-arr[i];
    }
  long int big=asum[0],small=asum[0];
    for(int i=0;i<5;i++)
    {
          if(big<=asum[i])
            {
                big=asum[i];
            }
           if(small>=asum[i])
            {
                small=asum[i];
            }
        }
    

    printf("%ld",small);printf(" ");printf("%ld",big);
    
    return 0;
}
