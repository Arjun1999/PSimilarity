#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(void) 
{
  int n,k=0,j=0,sum=0,a[10],status,c[10],i=0,temp;
  printf("array size:\n");
  scanf("%d",&n);
  printf("enter array numbers:\n");
  for(j=0;j<n;j++)
    scanf("%d",&a[j]);
    while(k<n)
    {
      status=a[k];
      printf("%d\n",status);
      for(j=0;j<n;j++)
      {
        sum=sum+a[j];
      }
      sum=sum-status;
      c[k]=sum;
      sum=0;
      k++;
    }
    printf("array numbers are:\n");
    for(k=0;k<n;k++)
    {
      printf("%d\n",c[k]);
    }
    
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(c[i]>c[j])
        {
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
      }
    }
    }
    printf("%d",c[0]);
    printf("%d",c[4]);
    return 0;
}