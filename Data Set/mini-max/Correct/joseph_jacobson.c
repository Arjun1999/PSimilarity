
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    
    int arr_i, arr_j;

    unsigned long long int result[5],temp,sum;
    
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    for(arr_i = 0; arr_i < 5; arr_i++){

	   sum = 0;    	

       for(arr_j = 0; arr_j < 5; arr_j++){

		  if(arr_i != arr_j){
			
			 sum = sum + arr[arr_j];
			
		  }
	    }
	
	result[arr_i] = sum;

	//printf("%lld\n", result[arr_i]);
	
    }


    for(arr_i=0; arr_i<5; arr_i++){
    
	   for(arr_j=0; arr_j < 5; arr_j++){
	
		  if(arr_i != arr_j){

			 if(result[arr_i] > result[arr_j]){
			
			 }
			 else
			 {
				temp = result[arr_i];
		
				result[arr_i] = result[arr_j];

				result[arr_j] = temp;
			 }
	
		   }

    	   }

    }
 
   printf("%lld %lld\n", result[0], result[4]);      
   
   return 0;
}