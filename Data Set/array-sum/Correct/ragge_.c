#include<stdio.h>
#include<stdlib.h>

int main(){

	int size, sum = 0;
	int *arr;
	scanf("%d", &size);
	arr = malloc(sizeof(int)*size);
	for (int i = 0; i < size; i++){
		int tmp;
		scanf("%d", &tmp);
		*(arr + i) = tmp;
		sum += *(arr + i);
	}
	printf("%d", sum);


	return 0;
}