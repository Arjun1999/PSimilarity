#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
       int minSum=0;
	    int maxSum=0;
	    
	    for (int i=0;i<5;i++){
	    	int sum=0;
	        for(int j=0; j<5;j++){
	            if(i==j){
	                
	            }else{
	                sum+=arr[j];
	            }
	        }
	        if (sum>maxSum) maxSum=sum;
	        if(i==0) minSum=sum;
	        if (sum<minSum)minSum=sum;
	        
	    }
	    System.out.println(minSum+"  "+maxSum);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0; 
}
