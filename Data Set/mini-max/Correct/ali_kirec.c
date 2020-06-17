#include <stdio.h>
#include <stdlib.h>
#define ABS_MIN  0
#define ABS_MAX 1000000001
int main(){
	long long int *arr = malloc(sizeof(long long int)*5),curr_min,curr_max,arr_sum;
	int i;
	for(i=0;i<5;i++){
		scanf("%lld",&arr[i]);
	}
	//find min, max, and sum
	curr_min = ABS_MAX;
	curr_max = ABS_MIN;
	arr_sum = 0;
	for(i=0;i<5;i++){
		if(arr[i]<curr_min){
			curr_min = arr[i];
		}
		if(arr[i]>curr_max){
			curr_max = arr[i];
		}
		arr_sum += arr[i];
	}
	printf("%lld %lld\n",arr_sum-curr_max,arr_sum-curr_min);
	
	return 0;
}
