#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
	int i,j;
    long long int arr[5],minsum=0,maxsum=0,sum=0,s=0,s1=0;
    for(i=0;i<5;i++)
    {
    	scanf("%lld",&arr[i]);
	}
	
	 for(i=0;i<5;i++)
	 {
	 	sum=sum+arr[i];
	  }
	  
	 s1=arr[0]+arr[1]+arr[2]+arr[3];
	 maxsum=s1;
	 minsum=s1;
	 for(i=0;i<4;i++)
	 {
	 	s=sum;
	 	s=s-arr[i];
	 	if(s<=minsum)
	 	   minsum=s;
	 	if(s>=maxsum)
	 	   maxsum=s;
	 }
	 printf("%lld %lld",minsum,maxsum);
	  
	  
    return 0;
}
