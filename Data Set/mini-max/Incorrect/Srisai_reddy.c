#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int a[10],s,d,n,i,j,t;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
for(i=0;i<n;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(a[j]>a[j+1])
      {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;  
      }  
    }  
  }  
  for(i=1;i<n;i++)
  {
    s=s+a[i];
  }
  for(i=0;i<n-1;i++)
  {
    d=d+a[i];
  }
  printf("%d %d",d,s);

}

