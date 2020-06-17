#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*a,i;
	long long s=0;
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("%lld",s);
	return 0;
}