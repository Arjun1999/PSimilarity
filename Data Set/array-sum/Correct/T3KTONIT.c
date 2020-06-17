#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int arraysize	= 0;
	int sum			= 0;
	scanf("%d", &arraysize);
	int *numberarray = (int*)malloc(arraysize);
	for (int i = 0; i < arraysize; i++)
	{
		scanf("%d", &numberarray[i]);
		sum += numberarray[i];
	}
	printf("%d", sum);
	return 0;
}