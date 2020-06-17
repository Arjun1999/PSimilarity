#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    int b;
    for(b=0;b<5;b++)
    scanf("%ld",&a[b]);
    long long int c[7]={0};
	int d;
    for(b=0;b<5;b++)
    {
    	for(d=0;d<5;d++)
    	{
    		if(d!=b)
    		{
			c[b]=c[b]+a[d];
			}
		}
	}
	for(b=0,c[6]=10000000000,c[5]=-1;b<5;b++)
	{
        c[5]=(c[5]>c[b])?c[5]:c[b];
		c[6]=(c[6]<c[b])?c[6]:c[b];
	}
	printf("%lld %lld",c[6],c[5]);
    return 0;
}
