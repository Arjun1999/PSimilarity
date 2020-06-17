#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    /*
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    */
    
    long long int a[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        scanf("%lld", (a + i));
    }
    
    long long int max = a[0], min = a[0], sum = 0;
    for(i = 0; i < 5; i++)
    {
        if (a[i] > max) max = a[i];
        else if (a[i] < min) min = a[i];
        sum += a[i];
    }
    
    printf("%lld %lld", (sum - max), (sum - min));
    
    return 0;
}
