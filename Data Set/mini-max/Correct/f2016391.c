#include <stdio.h>
#include <limits.h>
 int main()
 {
 	long int arr[5],sum[5]={0},max=LONG_MIN,min=LONG_MAX;
 	for(int i=0;i<5;i++)
 	{
 		scanf(" %ld",&arr[i]);
 	}
 	for(int i=0;i<5;i++)
 	{
 		if(i!=0)
 		{
 			sum[0]+=arr[i];
 		}
 	}
 	for(int i=0;i<5;i++)
 	{
 		if(i!=1)
 		{
 			sum[1]+=arr[i];
 		}
 	}
 	for(int i=0;i<5;i++)
 	{
 		if(i!=2)
 		{
 			sum[2]+=arr[i];
 		}
 	}
 	for(int i=0;i<5;i++)
 	{
 		if(i!=3)
 		{
 			sum[3]+=arr[i];
 		}
 	}
 	for(int i=0;i<5;i++)
 	{
 		if(i!=4)
 		{
 			sum[4]+=arr[i];
 		}
 	}
 	for(int i=0;i<5;i++)
 	{
 		if(max<sum[i])
 		{
 			max=sum[i];
 		}
 	}
 	for(int i=0;i<5;i++)
 	{
 		if(min>sum[i])
 		{
 			min=sum[i];
 		}
 	}
 	printf("%ld %ld\n",min,max);
 	return(0);
 }