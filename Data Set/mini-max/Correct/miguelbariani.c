#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }

	long int sum, max, min;
	short int i, j;

	for(i = 0, max = min = 0; i < 5; i++) {
		for(j = 0, sum = 0; j < 5; j++) {
			if(j != i)
				sum += arr[j];
		}
		if(i == 0)
			max = min = sum;
		else if(sum > max)
			max = sum;
		else if(sum < min)
			min = sum;
	}

	printf("%ld %ld\n", min, max);

    return 0;
}