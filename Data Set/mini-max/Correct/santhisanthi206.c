#include<stdio.h>
int main()
{
	long long int a[5],i,j,max=0,min=0;
	for(i=0;i<5;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(a[i]>a[j])
			{
				long long int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		}
		for(i=0;i<4;i++)
		{
			min=min+a[i];}
		for(i=1;i<5;i++)
		{
			max=max+a[i];}
		printf("%lld %lld",min,max);
			
}