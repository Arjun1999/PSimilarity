#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int *get_min(long int a[5])
{
	int		i = 1;
	long int	*min;
	min =  a;
	while (i < 5)
	{
		if (*(a + i) < *min)
			min = a + i;
		i++;
	}
	return (min);
}

long int *get_max(long int a[5])
{
	int		i = 1;
	long int	*max;
	max =  a;
	while (i < 5)
	{
		if (*(a + i) > *max)
			max = a + i;
		i++;
	}
	return (max);
}

int	main(void)
{
	long int a[5];
	
	scanf("%ld %ld %ld %ld %ld", a, a + 1, a + 2, a + 3, a + 4);
	long int *min = get_min(a);
	long int *max = get_max(a);
	long int sum_min = *min;
	long int sum_max = *max;
	if (*min == *max)
	{
		printf("%ld %ld", sum_min * 4, sum_max * 4);
		return (0);
	}
	int i = 0;
	while (i < 5)
	{
		if (a + i != min && a + i != max)
		{
			sum_min += *(a + i);
			sum_max += *(a + i);
		}
		i++;
	}
	printf("%ld %ld", sum_min, sum_max);
	return 0;
}

