
//  https://www.hackerrank.com/challenges/simple-array-sum

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	int *array;
	int num_elements;
	int i;
	int sum = 0;

	scanf("%d",&num_elements);
	//printf("%d\n",num_elements);

	array = malloc(num_elements * sizeof(int));
	if(!array)
	{
		fprintf(stderr,"Out of memory for array\n");
		return 1;
	}

	for(i=0;i<num_elements;i++)
	{
		scanf("%d",&array[i]);
		sum += array[i];
	}

	printf("%d",sum);

	free(array);

	return 0;
}
