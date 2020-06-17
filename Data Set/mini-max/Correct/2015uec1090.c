#include<stdio.h>
int main()
{
	long long int i,a[500],sum=0,max,min;
	for(i=1;i<=5;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=1;i<=5;i++)
	{
		sum=sum+a[i];
	}
	a[11]=sum-a[1];
	a[12]=sum-a[2];
	a[13]=sum-a[3];
	a[14]=sum-a[4];
	a[15]=sum-a[5];
	max=a[11];
	min=a[11];
	for(i=11;i<=15;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
		
	printf("%lld %lld",min,max);
	return 0;
}