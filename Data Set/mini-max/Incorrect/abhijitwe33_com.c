#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) 
{
    int i,j;
    long long sum[]={0,0,0,0,0};
    long long max,min;
    for(i=0;i<arr_size;i++)
    {
        for(j=0;j<arr_size;j++)
        {
            if(j!=i)
            {
                sum[i]+=*(arr+j);
            }
            else
            {
                continue;
            }
        }
    }
    max=sum[0];
    min=sum[0];
    for(i=1;i<arr_size;i++)
    {
      if(max<sum[i])
      {
          max=sum[i];
      }
    }
    for(i=1;i<5;i++)
    {
      if(min>sum[i])
      {
          min=sum[i];
      }
    }
    printf("\n%lld %lld",min,max);
}

int main() 
{
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) 
    {
      no:
      scanf("%i",&arr[arr_i]);
      if(arr[arr_i]<1 || arr[arr_i]>pow(10,9))
      {
          goto no;
      }
      else
      {
          continue;     
      }
    }
    miniMaxSum(5, arr);
    return 0;
}
