#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
	const int length = 5;
	long long unsigned int arr[length];
	scanf("%lld %lld %lld %lld %lld", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	long long unsigned int min = 0, max = pow(10,9);
	long long unsigned int sum = 0;
	for (int i = 0; i < length; ++i)
	{
		sum += arr[i];
		min = arr[i] <= min ? min : arr[i];
		max = arr[i] >= max ? max : arr[i];
	}
	printf("%llu %llu",sum - min, sum - max);
	return 0;
}
