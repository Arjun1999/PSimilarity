#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n = 5;
    long long int arr[n];
    scanf("%lld %lld %lld %lld %lld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    long min = 99999999999;
    long max = -99999999999;
    
    for (int i=0; i < n;i++)
    {
        long long int acc = 0;
        for (int j=0; j < n;j++)
        {
            if(i!=j)
            {
                acc+=arr[j];
            }
        }
        if(acc<min)
            min = acc;
        if(acc>max)
            max = acc;
    }
    printf("%lld %lld",min,max);
    return 0;
}
