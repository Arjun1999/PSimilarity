#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int ar[5];
	int i,j;
    long long int min,max;
    //scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
	for(i=0;i<5;i++)
	{
		scanf("%lld",&ar[i]);
	}
    for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{   int t;
			if(ar[j]>ar[j+1])
			{
				t=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=t;
			}
		}
	}
	min=0;
	max=0;
	for(i=0;i<4;i++)
	{
		min=min+ar[i];
	}
	for(i=1;i<5;i++)
	{
		max=max+ar[i];
	}
	printf("%lld %lld",min,max);
    return 0;
}
