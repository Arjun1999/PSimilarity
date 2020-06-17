#include<stdio.h>

int main()
{
	long int a[5],i,j,sum,b[5],min,max;
	for(i=0;i<5;i++)
	   scanf("%ld",&a[i]);
	for(i=0;i<5;i++)
	{   sum=0;
		for(j=0;j<5;j++)
		  if(i==j)
		    continue;
		else
		  
		  	sum=sum+a[j];
		  	     
		b[i]=sum;		 
	     
	}
	min=b[0];
	for(i=1;i<5;i++)
	{
		if(min>b[i])
		  min=b[i];
	}
	max=b[0];
	for(i=1;i<5;i++)
	{
		if(max<b[i])
		  max=b[i];
	}
	printf("%ld %ld",min,max);
	return 0;
}