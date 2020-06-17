#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

 int main() {
    int arr[5];
     
     long int min=0,max=0,i,j,temp=0;
    for(i = 0; i < 5; i++)
	{
       scanf("%ld",&arr[i]);
    }
    for(i = 0; i < 5; i++)
	{
       for(j=i+1;j<5;j++)
       {
       if(arr[j]<arr[i])
	   {
       			temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
           }
	   }
    }

 	for(i=0; i<4; i++)
    {
        min+=arr[i];
    }
    printf("%ld ",min);
 for(i=1; i<5; i++)
    {
        max+=arr[i];
    }
    printf("%ld",max);
 
 
    
    return 0;
}
