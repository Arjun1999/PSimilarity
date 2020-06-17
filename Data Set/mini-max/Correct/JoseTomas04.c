
// Mini-Max Sum
#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long int num[5];
	long long int i, j;
	long long int sum = 0;
	long long int min = 1000000000;
	long long int max = 0;
	
	long long int alfa;
	long long int beta;
		
	for ( i = 0; i < 5; ++i )
	{
		scanf("%lld", &num[i]);
		sum += num[i];
	}
	
	for ( i = 0; i < 5; ++i )
	{
		if ( num[i] < min )
		{
			min = num[i];
		}
		
		if ( num[i] > max )
		{
			max = num[i];
		}
	}
	
	alfa = sum - max;
	beta = sum - min;
	printf("%lld %lld", alfa, beta );
}
