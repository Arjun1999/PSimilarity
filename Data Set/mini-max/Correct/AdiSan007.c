#include<stdio.h>

int main()
{
	long int a[5];
	int i, j;
	for(i=0; i<5; i++)
	{
		scanf("%ld", &a[i]);
	}
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i!=j)
			{
				if(a[i]<a[j])
				{
					long int temp;
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}
	printf("%ld ", a[0]+a[1]+a[2]+a[3]);
	printf("%ld", a[4]+a[1]+a[2]+a[3]);
}