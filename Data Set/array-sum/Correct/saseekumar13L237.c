#include <stdio.h>

int main(void) {
	int n,i,sum=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=a[i]+sum;
	}
	printf("%d",sum);
	return 0;
}
