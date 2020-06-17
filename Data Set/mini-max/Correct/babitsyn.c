#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int min=1000000000;
    long int max=0; 
    long long int minsum=0;
    long long int maxsum=0;
    long long int sum=0;
    for(int i = 0; i < 5; i++){
        scanf("%li",&a);
        if(a<min) min = a;
        if(a>max) max = a;
        sum += a;
    }
    maxsum = sum - min;
    minsum = sum - max;
    printf("%lli %lli",minsum, maxsum);
    return 0;
}
