#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int arr[5];
    scanf("%ld", &arr[0]);
    long int MAX = arr[0];
    long int MIN = arr[0];
    long int sum = 0;
    for (int i=1;i<5;i++)
    {
        scanf("%ld",&arr[i]);
        if(MAX<arr[i])
            MAX = arr[i];
        if(MIN>arr[i])
            MIN = arr[i];
       sum = sum + arr[i];
    }
    sum += arr[0];
    printf("%ld %ld", sum-MAX, sum-MIN);
        
    return 0;
}
