#include <stdio.h>

int main()
{
	int i;
	int size;
	int total=0;
	scanf("%d",&size);
	int arr[size];
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		total=arr[i]+total;
	}
	printf("%d",total);
	
	return 0;
}

