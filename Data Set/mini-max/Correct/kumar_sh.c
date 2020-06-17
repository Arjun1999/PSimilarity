#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	unsigned long long int min;
	unsigned long long int max;
	unsigned long long int num;
	unsigned long long int sum = 0;
	int i;

	for (i = 0; i < 5; i++) {
		scanf("%llu", &num);

		sum += num;

		if (i > 0) {
			if (num > max) {
				max = num;
			} else if (num < min){
				min = num;
			}
		} else {
			min = num;
			max = num;
		}
	}

	printf("%llu %llu", sum - max, sum - min);

	return 0;
}

