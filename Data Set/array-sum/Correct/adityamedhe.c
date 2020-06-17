#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
	int N, sum = 0, i, temp;
	scanf("%d", &N);
 
	for(i = 0 ; i < N; i++)
	{
		scanf("%d", &temp);
		sum += temp;
	}

	printf("%d\n", sum);
    return 0;
}
