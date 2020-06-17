#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>

long int val[10];

int main(){
    long int tcase[10];
    long int max, min;
    scanf("%lld %lld %lld %lld %lld",&tcase[0],&tcase[1],&tcase[2],&tcase[3],&tcase[4]);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            val[i] += (i == j ? 0 : tcase[j]);
        }
    }
    max = 0;
	
    for(int i=0;i<5;i++){
        if(val[i] > max) max = val[i];
    }
    
    min = max;
    for(int i=0;i<5;i++){
        if (val[i] < min) min = val[i];
    }
    
    printf("%ld %ld", min, max);
    
    return 0;
}
