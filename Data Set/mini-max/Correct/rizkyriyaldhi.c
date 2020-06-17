#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int input[5];
    unsigned long long int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%lld", &input[i]);
        sum += input[i];
    }
    unsigned long long int min = sum;
    unsigned long long int max = 0;
    for (int i = 0; i < 5; i++)
    {
        unsigned long long int temp = sum - input[i];
        if (temp < min)
            min = temp;
        if (temp > max)
            max = temp;
    }
    printf("%lld %lld", min, max);
    return 0;
}
