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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int max = 0,min = 0, swap = 0,n = 5;
    long int sum1=a+b+c+d,sum2=b+c+d+e,sum3=c+d+e+a,sum4=d+e+a+b,sum5=e+a+b+c;
    long int array[5] = {sum1,sum2,sum3,sum4,sum5};
    for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
    printf("%ld %ld",array[0],array[4]);
}
