#include<stdio.h>
int main()
{
	int i, N, *array, sum=0;

	scanf("%d",&N);
	array = (int*)malloc(N * sizeof(int));

	for (i = 0; i < N; i++)
	{
		scanf("%d", &array[i] );
		sum += array[i];
	}

	printf("%d",sum);

	return 0;
}