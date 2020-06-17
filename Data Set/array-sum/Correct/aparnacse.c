#include<stdio.h>
int main()
{
	 int n;int j,s=0;
	scanf("%d",&n);
	int a[n];
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	for(j=0;j<n;j++)
	{
		 s=s+a[j];
	}
	printf("%d",s);
	return 0;
}
