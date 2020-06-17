#include <stdio.h>
#include <stdlib.h>
void process(int n) {
	int i;
	int cur;
	int sum = 0;

	for (i = 0; i < n; ++i) {
		scanf("%d", &cur);
		sum += cur;
	}

	printf("%d\n", sum);
}

int main () {
	int n;

	scanf("%d\n", &n);
	process(n);
}
