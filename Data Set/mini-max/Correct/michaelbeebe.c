#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int arr[5];
    scanf("%lld %lld %lld %lld %lld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    
    long long int longest = 0;
    long long int shortest = 0;
    for (int i = 0; i < 5; i++)
    {
        long long int sum = arr[i % 5] + arr[(i + 1) % 5] + arr[(i + 2) % 5] + arr[(i + 3) % 5];
        if (i == 0)
        {
            longest = sum;
            shortest = sum;
        }
        else
        {
            if (sum > longest)
                longest = sum;
            else if (sum < shortest)
                shortest = sum;
        }
    }
    printf("%lld %lld", shortest, longest);
    return 0;
}
