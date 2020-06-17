#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void swap(long int *a, long int *b) {
    long int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    long int arr[5];
    scanf("%ld %ld %ld %ld %ld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    for (int i = 1; i <= 5; i++) {
        int  j = i;
		while (j > 0 && (arr[j - 1] > arr[j])) {
			swap(&arr[j], &arr[j-1]);
			j = j - 1;
		}
	}
    long int sumMin = 0, sumMax = 0;
	for (int i = 1; i <= 4; i++) {
        sumMin += arr[i];
	}
    for (int i = 2; i <= 5; i++) {
        sumMax += arr[i];
	}
    printf("%ld %ld", sumMin, sumMax);
    return 0;
}
