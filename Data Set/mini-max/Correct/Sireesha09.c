#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main ()
{
  long int i = 0, sum = 0, b[5], l = 0,min,max;
  long int *arr = malloc (sizeof (long int) * 5);
  for (int arr_i = 0; arr_i < 5; arr_i++)
      scanf ("%li", &arr[arr_i]);
  for (int arr_i = 0; arr_i < 5; arr_i++)
    {
      sum = 0;
      for (int k = 0; k < 5; k++)
	  {
	  if (arr_i == k)
	      continue;
	  sum = sum + arr[k];
	  }
      b[l++] = sum;
    }
    min=b[0];
    for (int j = 1; j < 5; j++)
    {
      if(b[j]<min)
       min=b[j];
    }
    max=b[0];
    for(int f=1;f<5;f++)
    {
     if(b[f]>max)
         max=b[f];
    }
    printf("%li %li",min,max);
    return 0;
}

