#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    	long int i,sum1,sum2,sum3,sum4,sum5,max,min;
sum1=b+c+d+e;
sum2=a+c+d+e;
sum3=a+b+d+e;
sum4=a+b+c+e;
sum5=a+b+c+d;
long int arr[5]={sum1,sum2,sum3,sum4,sum5};
max=sum1;
min=sum1;
for(i=0;i<5;i++)
{
	if(arr[i]>max)
	{
		max=arr[i];
	}	
	else if(arr[i]<min)
	{
	min=arr[i];
}
}
printf("%ld ",min);
printf("%ld",max);
    return 0;
}
