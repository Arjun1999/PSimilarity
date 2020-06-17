#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void get_min_max_sum (long int a, long int b, long int c, long int d, long int e, 
                      long long int *min, long long int *max)
{
    long int array[5] = {a,b,c,d,e};
    long long int tmp_max = a;
    long long int tmp_min = a;
    int i;
    for (i =0;i<5-1;i++) {
        
        if (tmp_min >= array[i+1]) {
            tmp_min = array[i+1];
        }
        
        if (tmp_max <= array[i+1]) {
            tmp_max = array[i+1];
        }
    }
    
    *max = (a + b + c + d + e);
    *min = (*max - tmp_max);
    *max = (*max) - tmp_min;
}
int main() 
{
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long long int min , max;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    get_min_max_sum(a,b,c,d,e, &min, &max);
    printf("%lld %lld", min, max);
    return 0;
}
