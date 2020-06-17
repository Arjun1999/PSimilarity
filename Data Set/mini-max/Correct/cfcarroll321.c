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
    int count = 0, i = 1, n = 0;
    long long int hold;
    long long int sum[5];
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    while (count < 5)
    {
        if(count == 0)
        {
            sum[count] = a + b + c + d; 
        }
        if (count == 1)
        {
           sum[count] = b + c + d + e;     
        }
        if(count == 2)
        {
            sum[count] = a + c + d + e;    
        }
        if(count == 3)
        {
            sum[count] = a + b + d + e;     
        }
        if (count == 4)
        {
            sum[count] = a + b + c + e;     
        }
        count++;
    }
    count = 0;
    while(count < 5)
    {
        while (i < 5)
        {
            if (sum[n] > sum[i])
            {
                hold = sum[n];
                sum[n] = sum[i];
                sum[i] = hold; 
            }
            i++;
            n++;
        }
    i = 1;
    n = 0;
    count++;    
    }
    printf("%lld %lld", sum[0], sum[4]);
    return 0;
}
