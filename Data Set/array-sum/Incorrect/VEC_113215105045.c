#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[10],b=0,c,d,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d ",&a[i]);
    }
  for(i=0;i<n;i++)
    {b=b+a[i];
    }
    
    printf("%d",b);
   return 0; 
}