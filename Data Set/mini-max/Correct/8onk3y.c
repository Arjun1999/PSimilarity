#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    int size = 5;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    int array[5]={a,b,c,d,e};
    
    int min=array[0], i_min;
	for(int i=1; i<size; i++) {
		if(array[i] < min) {
            min=array[i];
			i_min = i;
		}
	}
    
    int max=array[0], i_max;
	for(int i=1; i<size; i++) {
		if(array[i] > max) {
            max=array[i];
			i_max = i;
		}
	}
    
    long long int min_sum = 0, max_sum = 0;
    for(int i=0; i<size; i++){
       
       if(i != i_min) max_sum += array[i];
       if(i != i_max) min_sum += array[i];
    }
    
    printf("%lld %lld", min_sum, max_sum);
    
    return 0;
}
