#include<stdio.h>
int main()
{
	long int a[5],b[5],d,c=0;
    int i,j;
	for(i=0;i<5;i++)
	scanf("%ld",&a[i]);
	for(i=0;i<5;i++)
	{      c=0;
		for(j=0;j<5;j++)
		{   if(i != j)
			 c=c+a[j];
		}
		b[i]=c; 
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				d=b[j];
				b[j]=b[j+1];
				b[j+1]=d;
			}
		}
	}
	printf("%ld %ld",b[0],b[4]);
}