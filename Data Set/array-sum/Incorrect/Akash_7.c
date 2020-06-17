#include<stdio.h>
int main()
{
	int i,a[i];
	int k,j;
	int sum=0;
	scanf("%d",&k);
	for(j=0;j<k;j++)
	{
		scanf("%d",&a[j]);
		sum=sum+a[j];
	}
	printf("%d",sum);
}