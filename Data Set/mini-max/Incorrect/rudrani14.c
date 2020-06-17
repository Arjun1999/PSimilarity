#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[4]; 
    long int sum = 0;
    long int minsum;
    long int maxsum;
    long int min = a[0];
    long int max = a[0];
    int i;
    for(i = 0; i < 5; i++){
        scanf("%ld",&a[i]);
        sum +=a[i];    
    }
    for(i = 1; i < 5; i++){
        if(a[i]< min){
            min = a[i];
        }
        else if(a[i] > max){
            max = a[i];
        }
    }
    minsum = sum - max;
    maxsum = sum - min;
    printf("%ld %ld",minsum,maxsum);
    return 0;
}
