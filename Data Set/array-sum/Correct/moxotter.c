#include <stdio.h>

int main()
{
	int n, i, a, sum = 0;
	
	scanf("%i", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%i", &a);
		sum += a;
	}
	
	printf("%i\n", sum);
	
	return 0;
}
