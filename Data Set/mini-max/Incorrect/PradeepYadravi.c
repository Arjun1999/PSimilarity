#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
  int array[100], n=5, c, d, swap,sum=0;
 
 // printf("Enter number of elements\n");
  //scanf("%d", &n);
 
  //printf("Enter %d integers\n", n);
 
  for (c = 1; c <= 5; c++)
    scanf("%d", &array[c]);
 
  for (c = 1 ; c <= 5; c++)
  {
    for (d = 0 ; d < 5 - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
    for (c = 1 ; c <= 5; c++)
        sum+=array[c];
   // printf("%d",sum);
    printf("%d %d",sum-array[5],sum-array[1]);
}