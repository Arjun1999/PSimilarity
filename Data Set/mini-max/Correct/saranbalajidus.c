#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
	long i,j,k,low=0,high=0;
	long a[10],b[10];
		for(i=0;i<6;i++)
		{
		scanf("%ld",&a[i]);
		}
		b[0]=a[1]+a[2]+a[3]+a[4];
		b[1]=a[0]+a[2]+a[3]+a[4];	
		b[2]=a[1]+a[0]+a[3]+a[4];
		b[3]=a[1]+a[2]+a[0]+a[4];
		b[4]=a[1]+a[2]+a[3]+a[0];
		low=b[0];
	for(i=0;i<5;i++)
		{
		if(b[i]<low)
		{
		low=b[i];
		}
	}
    high=b[0];
	for(i=0;i<5;i++)
		{
		if(b[i]>high)
		{
		high=b[i];
		}
	}
    printf("%ld %ld",low,high);
	}
