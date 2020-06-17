#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long long int i,a[100],b[100],max=0,sum=0,n=5,min;
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
   for(i=0;i<n;i++)
       {
       sum=sum+a[i];
      
   }
    for(i=0;i<n;i++)
    {
     b[i]=sum-a[i];
    }
    min=b[0];
    for(i=0;i<n;i++)
    {
    	if(b[i]>max)
    	max=b[i];
    	if(b[i]<min)
    	min=b[i];
    }
    printf("%lld %lld",min,max);
}