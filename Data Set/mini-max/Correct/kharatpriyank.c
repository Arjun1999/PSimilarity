#include<stdio.h>
#define SIZE 5


void min_max(long int a[],long int *minMax, int i, int j){
	long int minMax1[2],minMax2[2];
	if(i == j){
		minMax[0] = a[i];
		minMax[1] = a[i];
	}else if(i == (j-1)){
		minMax[0] = (a[i] < a[j]) ? a[i] : a[j];
		minMax[1] = (a[i] > a[j]) ? a[i] : a[j];
	}else{
		int mid = (i + j)/2;
		 min_max(a,minMax1, i, mid);
		min_max(a,minMax2, mid+1, j);
		minMax[0] = (minMax1[0] < minMax2[0]) ? minMax1[0] : minMax2[0]; 
		minMax[1] = (minMax1[1] > minMax2[1]) ? minMax1[1] : minMax2[1]; 
		
	}
}

int main(int argc, char** argv){
	long int arr[SIZE], minMax[2], sum = 0;
	for(int i = 0; i < SIZE; i++){
		scanf("%ld", &arr[i]);
		sum = sum + arr[i];
	}
	min_max(arr, minMax, 0, SIZE-1);
	
	printf("%ld %ld", sum - minMax[1], sum - minMax[0]);
	return 0;
}
