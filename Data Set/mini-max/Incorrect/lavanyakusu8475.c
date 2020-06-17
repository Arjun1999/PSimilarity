#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	long int a[5];
	long int min=a[0],max=0,sum=0;
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%ld",&a[i]);
		sum+=a[i];
		if(max<a[i])
            max=a[i];
        else if(min>a[i])
            min=a[i];
    }
    printf("%ld %2ld",(sum-max),(sum-min-1));
    return 0;
}