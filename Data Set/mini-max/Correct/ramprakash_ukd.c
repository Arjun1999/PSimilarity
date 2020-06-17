#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int array[100], c, d, swap;
 
 

 
  for (c = 0; c < 5; c++)
    scanf("%ld", &array[c]);
 
  for (c = 0 ; c < 4; c++)
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
 
long int min=array[0]+array[1]+array[2]+array[3];
long int max=array[4]+array[1]+array[2]+array[3];
 
 
  printf("%ld %ld",min,max);
    return 0;
}
