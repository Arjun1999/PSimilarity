#include <stdio.h>
#include <stdlib.h>

void sort_increasingly(int *arr, int arr_size);

int main()
{
	int nums[5] = {0};
	long int min = 0, max = 0;

	int i = 0;
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &nums[i]);
	}

	sort_increasingly(nums, 5);

	for(i = 0; i < 4; i++)
	{
		min += nums[i];
		max += nums[4-i];
	}

	printf("%ld %ld\n", min, max);
	return 0;
}

void sort_increasingly(int *arr, int arr_size)
{
	// We will use bubble sort
	int outer = 0, inner = 0;
	int temp = 0;

	for(outer = arr_size; outer > 1; outer--)
	{
		for(inner = 1; inner < outer; inner++)
		{
			if(arr[inner] < arr[inner - 1])
			{
				// Swap to forward the larger element
				temp = arr[inner - 1];
				arr[inner - 1] = arr[inner];
				arr[inner] = temp;
			}
		}
	}

}
