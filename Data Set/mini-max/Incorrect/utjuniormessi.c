#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int i,n;
    long int a[10],b[10],sum=0,SUM=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
	for(i=0;i<n;i++)
		sum=sum+a[i];
	for(i=0;i<n;i++)
		{
			b[i]=sum-a[i];
			printf("%ld ",b[i]);
		}
	long int smallest=b[0];
	for(i=1;i<n;i++)
	{
		if(smallest>b[i])
			smallest=b[i];
	}
	printf("\n%ld",smallest);
	long int largest=b[0];
	for(i=1;i<n;i++)
	{
		if(largest<b[i])
			largest=b[i];
	}
	printf("\n%ld",largest);
    return 0;
}
