#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int arr[5];
    int n = 5;
    
    for (int i = 0; i < n; i++) {
        scanf("%lld",&arr[i]); 
    }
    
    long long int min, max, total;
    
    for (int i = 0; i < n; i++) {
        total = 0;
        
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            total += arr[j];
        }
        
        if (i == 0) {
            min = total;
            max = total;
            continue;
        } 
        if (total < min) {
            min = total;
        }
        if (total > max) {
            max = total;
        }
    }
    
    printf("%lld %lld", min, max);
    
    return 0;
}