#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {  
	int A, i, sum;
	int *array;
	sum=0;
	scanf("%d", &A);
	getchar();
	array= (int*) malloc  (sizeof(A));
	for(i=0;i<A;i++){
		scanf("%d", array+i);
		getchar();
	}
	for(i=0;i<A;i++){
		sum=sum+array[i];
	}
	printf("%d\n", sum);
	return 0;
}
