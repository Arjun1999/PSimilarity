#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
sample input:
942381765
627450398
954173620
583762094
236817490
*/

int main() {

	long long int a[7];
	long long int sum[7] = {};
	long long int temp;
	long long int min, max;

	for (int i = 0; i<5; i++)
	{
		scanf("%lld", &a[i]);//fflush(stdin);
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j == i) {
				temp = a[j];
				a[j] = 0;
			}
			sum[i] = sum[i] + a[j];
		}
		a[i] = temp;
	}

	min = sum[0], max = sum[0];

	for (int i = 0; i < 5; i++) {

		if (sum[i] > max)
			max = sum[i];

		if (sum[i] < min)
			min = sum[i];

		//printf("sum %d = %lld\n", i, sum[i]);

	}
	
	printf("%lld %lld", min, max);

	return 0;
}
