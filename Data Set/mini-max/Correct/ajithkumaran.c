#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long *arr = malloc(sizeof(int) * 5),sum=0,arr1[5],min,max;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    
    for(int i=0;i<5;i++){
        long sum=0;
            for(int j=0;j<5;j++){
                sum+=arr[j];
                
                }
                sum-=arr[i];
                arr1[i]=sum;
                
                
    }


min=arr1[0];
for(int j=0;j<5;j++)
{
	if(min>arr1[j]){
		min=arr1[j];
	}
	
}
printf("%ld ",min);
    max=arr1[0];
for(int i=0;i<5;i++){
                if(max<arr1[i]){
                	max=arr1[i];
                }    
                
}
printf("%ld",max);
    return 0;
}
