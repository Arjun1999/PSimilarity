#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void bubble_sort(int *list, int n)
{ int c, d;
  int t=0;
  for (c = 0 ; c < ( n - 1 ); c++)
  { for (d = 0 ; d < n - c - 1; d++)
    { if (list[d] > list[d+1])  // Swapping
      { t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}

int main() {
    long low=0, high=0;
    
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {   scanf("%d",&arr[arr_i]);
    }
    bubble_sort(arr,5);
    for(int i=0; i<4; i++)
    {   low  += arr[i];
        high += arr[i+1];
    }
    printf("%ld %ld\n",low,high);
    
    return 0;
}

