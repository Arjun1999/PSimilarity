#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *a = malloc(sizeof(long int) * 5);
	int i,j;
	long long int min, max;  
	for( i = 0; i < 5; i++){
       scanf("%ld",&a[i]);
    }
    for(i =0;i<5;i++)
	{	
		int k = i;
		min = *(a+i);
		for(j=i+1;j<5;j++)
		{	if(*(a+j)<min)
			{	min= *(a+j);
				k=j;
			}	}
		if(min!= *(a+i))
		{
			*(a+k) = *(a+i);
			*(a+i) = min;	}
	}
	 max = *(a+1) + *(a+2) + *(a+3) + *(a+4);
	min = *(a+1) + *(a+2) + *(a+3) + *(a+0); 
	printf("%lld %lld" , min , max);
    return 0;
}
