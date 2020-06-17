#include <stdio.h>
int main()
{
	int sum = 0;
	int num = 0;
	scanf("%d", &num);
	int temp;
	for (int count = 0; count < num; count++) {
		scanf("%d", &temp);
		sum += temp;
	}
	printf("%d", sum);

	return 0;
}