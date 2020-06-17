#include <stdio.h>

int main()
{
	long int arr[5],sum = 0,brr[5],temp;
	for(int i=0;i<5;i++)
	{
		scanf("%ld ",&arr[i]);
		sum = sum + arr[i];
	}
	for(int i=0;i<5;i++)
	{
		brr[i] = sum - arr[i];
	}
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<5-i;j++)
		{
			if(brr[j-1]>brr[j])
			{
				temp = brr[j-1];
				brr[j-1] = brr[j];
				brr[j] = temp;
			}
		}
	}
	printf("%ld %ld",brr[0],brr[4]);
}