#include<stdio.h>
int main()
{
	long int a[5],sum[5]={0};
	long int max,min;
    int i,j;
	for(i=0;i<5;i++)
	scanf("%ld",&a[i]);
	for(j=0;j<5;j++)
	{    
		for(i=0;i<5;i++)
		{
			sum[j]+=a[i];
		}
		sum[j]=sum[j]-a[j];
	}
	max=sum[0];min=sum[0];
	for(i=0;i<5;i++)
	{
		if(sum[i]>max)
		max=sum[i];
		if(sum[i]<min)
		min=sum[i];
	}
	printf("%ld %ld",min,max);
	return 0;
}
