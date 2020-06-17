#include <stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int a[size],sum=0;
	for (int i = 0; i < size; i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("%d\n", sum);
	return 0;
}