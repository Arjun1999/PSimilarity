#include<stdio.h>
int main()
{
	int n=0,s=0,a[1000],i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		s=s+a[i];
	printf("%d",s);
    return 1;
	
	
}