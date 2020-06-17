#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,x=0;
    int a[100];
    for(i=0;i<n;i++)
    {
        printf("Element= %d",i);
        scanf("%d",&a[i]);
    }
      for(i=0;i<n;i++)
      {
          x=x+a[i];
      }
       printf("Sum= %d",x);
}


