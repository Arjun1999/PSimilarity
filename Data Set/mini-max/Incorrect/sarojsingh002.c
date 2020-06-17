#include <math.h>
#include <stdio.h>
int main()
{

    int i,j,sum=0,n=5,a[5],c[5],p=0,q=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]>=1&&a[i]<=1000000000)
//printf("");
    q++;
else 
return 0;
}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	if(a[i]!=a[j])
			sum = sum+a[j];
		}
		c[p++]= sum;
		sum = 0;
	}
	
int max = c[0],min = c[4],temp=0;
for(i=0;i<p;i++)
if(max <c[i])
{
temp = c[i];
c[i] = max;
max = c[i];
}
//for(i=0;i<p;i++)
//printf("%d ",c[i]);
//printf("\n");
for(i=0;i<p;i++)
if(min >c[i])
{
temp = c[i];
c[i] = min;
min = c[i];
}
printf("%d ",max);
printf("%d ",min);
return 0;
}
