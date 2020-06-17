#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    long long int a;
    int i;
    long long int sum=0;
    long long int min=INT_MAX;
    long long int max=INT_MIN;
    for(i=0;i<5;i++){
        scanf("%lli",&a); 
        sum += a;
        if(a < min)
            min = a;
        if(a > max)
            max = a;
    }
    printf("%lli %lli",sum-max,sum-min);
    return 0;
}