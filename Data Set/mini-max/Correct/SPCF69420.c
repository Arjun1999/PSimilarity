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
    int i,j = 0;
    int track = 0;
    long long int LowSum = LLONG_MAX;
    long long int MaxSum = LLONG_MIN;
    long long int TempSum = 0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int Array[] = {a,b,c,d,e};
    if ((a < 1) || (a > 1000000000) ||(b < 1) || (b > 1000000000) || (c < 1) || (c > 1000000000) || (d < 1) || (d > 1000000000) 
        || (e < 1) || (e > 1000000000))
    {
        printf("One of the inserted values is invalid. Exiting program.");
        exit(1);
    }
    
    while (j < 5) //j is the iterator of the element to skip
    {
        while (i < 5)
        { 
            if (i != j)
            {
                TempSum += Array[i];
            }
            i++;
        }
        if (TempSum < LowSum)
        {
            LowSum = TempSum;
        }
        if (TempSum > MaxSum)
        {
            MaxSum = TempSum;
        }
        TempSum = 0;
        i = 0;
        j++;
    }
    printf("%lld %lld", LowSum, MaxSum);
    return 0;
}
