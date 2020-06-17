#include <stdio.h>

int main(void) {
	int i,n,b=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=b+a[i];
	}
	printf("%d",b);
	return 0;
}
