#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
	int i,j,arr[5],temp,sum=0;
    for( i=0;i<5;i++)
	{
       scanf("%d",&arr[i]);
    }
    for( i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
       if(arr[i]>arr[j])
       {
	     temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
}
     sum=sum+arr[i];
}
      sum=sum-arr[0];
      printf(" %d ",sum);
      sum=sum+arr[0]-arr[4];
      printf("%d",sum);
}