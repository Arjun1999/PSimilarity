#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int i,n,sum=0,max,min;
	scanf("%d",&n);
	int a[n],d[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	for(i=0;i<n;i++)
	{
		d[i]=sum-a[i];
	}
	max=d[0];
	min=d[0];
	for(i=0;i<n;i++)
	{
		if(d[i]>max)
		{
			max=d[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(d[i]<min)
		{
			min=d[i];
		}
	}
	printf("%d %d",min,max);
	return 0;
}