#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a[5],max,min,sum=0,i;
   (" %d",&a[0]);
    max=a[0];min=a[0];sum=a[0]+sum;
    For(i=1;i<5;i++;
      scanf("%d",&a[i]);
      if(max<a[i])
       max=a[i];
      if(min>a[i])
        min=a[i];
        Sum=sum+a[i];
    Printf("%d%d",sum-max,sum-min);
  return 0;
}
