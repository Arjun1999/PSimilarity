#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   int i,j;
   unsigned long a[100],t,sum1=0,sum2=0;
   for(i = 0; i < 5; i++)
       scanf("%lu",&a[i]);
   for(i = 0; i < 4; i++)
       for(j = i+1; j < 5; j++)
            if(a[i] > a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
      }
    for(i = 0; i <= 3; i++)
        sum1 = sum1+a[i];
    for(i = 1; i <= 4; i++)
        sum2 = sum2+a[i];
    printf("%lu %lu",sum1,sum2);
        return 0;
}
