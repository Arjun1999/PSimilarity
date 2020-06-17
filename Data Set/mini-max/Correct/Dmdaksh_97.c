#include <stdio.h>
#include <stdlib.h>

int InsertionSort(int a[]);

int main(void)
{
	int a[5], sum1 = 0, sum2 = 0;
	int i;
	for (i = 0; i < 5; ++i)
	{
		scanf("%ld\n",&a[i]);
	}
	InsertionSort(a);
	for (i = 0; i < 4; ++i)
	{
		sum1 += a[i];
		sum2 += a[i+1];
	}
	printf("%ld %ld\n", sum1, sum2 );
}

int InsertionSort(int *a)
{
	int j, i;
	long int key;
	for (i = 0; i < 5; ++i)
	{
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			--j;
		}
		a[j+1] = key;
	}
	return *a;
}