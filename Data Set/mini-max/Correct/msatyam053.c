#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
	long long int a[10],b=0,c,d,i;
	for(i=0;i<5;i++)
	{
		scanf("%lld",&a[i]);
		
	}
	for(i=0;i<5;i++)
	{
		b=b+a[i];
	}
	c=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<c)
		{
			c=a[i];
		}
	}
	d=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>d)
		{
			d=a[i];
		}
	}
	printf("%lld %lld",b-d,b-c);
}