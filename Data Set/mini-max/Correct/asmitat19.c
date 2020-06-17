#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long min = 0;
    long max = 0;
    long sum = 0;
    
    long a[5];
    for(int i=0; i<5; i++) {
        scanf("%ld", &a[i]);
        sum += a[i];
    }
    
    for(int i=0; i<5; i++) {
        long temp = sum - a[i];
        
        if(i == 0) {
            min = temp;
            max = temp;
        }
        else if(temp < min) 
            min = temp;
        else if(temp > max)
            max = temp;
    }
    
    printf("%ld %ld", min, max);
    
    return 0;
}
    