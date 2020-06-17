#include<stdio.h>
#define MAXSIZE 1000
int sum(int arr[],int n)
{
	int sum=0;
	int i;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}	
	
	return sum;
}

int main()
{	
	int arr[MAXSIZE];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("%d",sum(arr,n));
	return 0;
}