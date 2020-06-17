#include<stdio.h>
//#include<conio.h>
int main()
{
	long int a[5],b[5],sum,temp;
    int i,j;
	for(i=0;i<5;i++)
	scanf("%ld",&a[i]);
	for(i=0;i<5;i++)
	{
		sum=0;
		for(j=0;j<5;j++)
		{
			
			if(j==i)
			{
			if(j==4)
			break;
				
			j=i+1;
		}
			sum+=a[j];
			
		}
		b[i]=sum;
	}
//	for(i=0;i<5;i++)
//	printf("%d\n",b[i]);
	//int temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
//	for(i=0;i<5;i++)
//	printf("%d\t",b[i]);
	printf("%ld %ld",b[0],b[4]);
	return 0;
	
}