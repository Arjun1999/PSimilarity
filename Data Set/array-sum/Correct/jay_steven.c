#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int* arr = NULL, *idx;
	int num = 0, temp = 0;

	scanf("%d", &num);
	arr = (int*)malloc(sizeof(int)*num);
	
	for (idx = arr; idx != arr + num; idx++)
	{
		scanf("%d", idx);
		temp += *idx;
	}
	printf("%d", temp);
	free(arr);

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}

