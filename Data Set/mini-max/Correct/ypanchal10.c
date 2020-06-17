#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j,k;
    long long int a,b,c,d,e,final[6],min,max=0;
    long long int *arr =(long long int*)malloc(sizeof(long long int) * 5);
    for(i = 0; i < 5; i++){
       scanf("%lld",&arr[i]);
    }
    for(j = 0; j < 5; j++)
	{
       final[j]=0;
    }
    for(k = 0; k < 5; k++)
	{
       for(j = 0; j < 5; j++)
		{ 
		  if(k==j)
		  continue;
		  else
          final[k]=final[k]+ *(arr+j);
		}
    }
    for(j = 0; j < 5; j++)
	{
       if(final[j]>max)
       {
       	max=final[j];
	   }
    }
    min=final[0];
    for(j = 0; j < 5; j++)
	{
       if(final[j]<min)
       {
       	min=final[j];
	   }
    }
    printf("%lld %lld",min ,max);
    
    return 0;
}