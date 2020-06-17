#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long long int a[10],i,j,min=0,max=0,temp;
    for(i=0;i<5;i++)
		scanf("%lld",&a[i]);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<4;i++)
		min=min+a[i];
	for(i=1;i<5;i++)
		max=max+a[i];
	printf("%lld %lld",min,max);
    return 0;
}
