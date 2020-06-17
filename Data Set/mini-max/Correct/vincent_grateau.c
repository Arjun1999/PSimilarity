#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int a;
    long long int b;
    long long int c;
    long long int d;
    long long int e;
    long  long int res_max = 0;
    long long int res_min = 0;
    long long int res = 0;
    int i = 0;
    int j = 0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    res_min = a +b + c +d +e;
    for(; j < 6; j++)
    {
        for(;i < 5; i++)
        {
            if(i == 0)
                res = b + c + d + e;
            if(i == 1)
                res = a + c + d + e;
            if(i == 2)
                res = a + b + d + e;
            if(i == 3)
                res = a + b + c + e;
            if(i == 4)
                res = a + b + c + d;
            if(res > res_max)
                res_max = res;
            if(res < res_min)
                res_min = res;
        }
    
    }
    printf("%lld %lld",res_min, res_max);     
    return 0;
}
