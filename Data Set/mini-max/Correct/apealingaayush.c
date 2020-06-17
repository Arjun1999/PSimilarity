#include<stdio.h>
int main()
{
long int a[5],b[5],sum=0,min,max,i,j;
for(i=0;i<5;i++)
{ 
scanf("%ld",&a[i]);
}

for(i=0;i<5;i++)
{sum=0;
for(j=0;j<5;j++)
{
if(j==i)
{

continue;
}
else
{
sum=sum+a[j];

}


}


b[i]=sum;

}
min=b[0];
max=b[0];
for(i=0;i<5;i++)
{
	if(b[i]<min)
	{
		min=b[i];
	}
	if(b[i]>max)
	{
		max=b[i];
	}
	
}
printf("%ld %ld",min,max);

}