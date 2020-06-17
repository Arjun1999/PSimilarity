#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int sum=0;int max=0,min=1000000000;
	int arr[5],i;
	for(i=0;i<5;i++)
	{
		scanf("%ld",&arr[i]);
		if(max<arr[i])
		max=arr[i];
		if(min>arr[i])
		min=arr[i];
	sum=sum+arr[i];
}
long int p=sum-max;
long int o=sum-min;
printf("%ld %ld",p,o);return 0;}
