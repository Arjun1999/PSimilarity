#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int s1,s2;
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
       int max,min,sum=0;
         for(int arr_i = 0; arr_i < 5; arr_i++)
         {
             if(arr_i=0)
             {
                 max=arr[arr_i],min=arr[arr_i];
             }
             if(arr[arr_i]>max)
                 max=arr[arr_i];
             if(arr[arr_i]<min)
                 min=arr[arr_i];
              for(int arr_i = 0; arr_i < 5; arr_i++)
              {
             sum=sum+arr[arr_i];
              }
             s1=sum-max;
             s2=sum-min;
           }
    }
        printf("%d %d",s1,s2);
    return 0;
}
