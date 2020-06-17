#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
    {
      int i,sum,n,a[1000];
      scanf("%d\n",&n);
      sum=0;
      for(i=0;i<=(n-1);i++)
          {
             scanf("%d ",&a[i]);
             sum=sum+a[i];
          }
      printf("%d",sum);
      return 0;
   }
