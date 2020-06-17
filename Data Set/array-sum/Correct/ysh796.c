#include <stdio.h>

int main(void) {
	int N, i, temp, sum=0;
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &temp);
		sum+=temp;
	}
	printf("%d", sum);
    return 0;
}
