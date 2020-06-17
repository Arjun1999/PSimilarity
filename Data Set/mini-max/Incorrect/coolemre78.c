#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void sort(int *links, int *rechts) {
	int *ptr1 = links;
	int *ptr2 = rechts;
	int x, temp;
	x = *(links+((rechts - links) / 2));

	do {
		while (x > *ptr1)ptr1++;
		while (x < *ptr2)ptr2--;
		if (ptr1 > ptr2)break;
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;

	} while (++ptr1 <= --ptr2);
	if (links < ptr2)sort(links, ptr2);
	if (rechts > ptr1)sort(ptr1, rechts);
}

int main(void) {
	int test[] = { 4,1,3,2,5 };
	int size = sizeof(test) / sizeof(int);
	sort(test, test + size-1);
	int max = 0, min = 0;

	for (int i = 0; i < size - 1; i++) {
		max = max+test[i+1];
		min =min+ test[i];
	};	
	
	printf("%d %d", min,max);
}
