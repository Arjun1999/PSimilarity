#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    long int arr[5] = {a,b,c,d,e};
    long int min_sum =0, max_sum =0, sum;
    
    for (int i = 0; i < 5; i++) {
        sum = 0;
        for (int j = 0; j < 5; j++) {
            if (j != i) {
                sum += arr[j];
            }
        }
               
        if (!min_sum) {
            min_sum = sum;
        } else if (sum < min_sum) {
            min_sum = sum;
        }
        
        if (sum > max_sum) {
            max_sum = sum;
        }
    }
    
    printf("%ld %ld", min_sum, max_sum);
    return 0;
}
