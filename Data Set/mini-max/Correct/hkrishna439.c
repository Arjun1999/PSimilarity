#include<stdio.h>
int main()
{
	long i,j,sum=0,arr[5],new[5],k=0,min=9999999999,max=0;
	for(i=0;i<5;i++)
	{
		scanf("%ld",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		k=i;
		for(j=0;j<5;j++)
		{
			if(j==k)
			{ 
			}
			else
				sum+=arr[j];
				
		}
		new[i]=sum;
		sum=0;
	}
	for(i=0;i<5;i++)
	{
		if(min > new[i])
			min=new[i];
		if(max < new[i])
			max=new[i];
	}
	printf("%ld %ld\n",min,max);
	return 0;
}
