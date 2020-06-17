#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    unsigned long long int a[5] = {0}, a_copy[5] = {0}, max[4] = {0};
    unsigned long long int min[4] = {ULLONG_MAX,ULLONG_MAX,ULLONG_MAX,ULLONG_MAX};
    unsigned long long int *temp = 0;
    
    scanf("%llu %llu %llu %llu %llu",&a[0], &a[1], &a[2], &a[3], &a[4]);
    memcpy(a_copy, a, sizeof(unsigned long long int) * 5);
    for (unsigned int ct = 0; ct < 4; ct++)
    {
        temp = &a[0];
        for (unsigned int arr_ct = 0; arr_ct < 5; arr_ct++)
            if (a[arr_ct] > max[ct])
            {
                max[ct] = a[arr_ct];
                temp = &a[arr_ct];
            }  
        *temp = 0;
    }
    memcpy(a, a_copy, sizeof(unsigned long long int) * 5);
    for (unsigned int ct = 0; ct < 4; ct++)
    {
        temp = &a[0];
        for (unsigned int arr_ct = 0; arr_ct < 5; arr_ct++)
            if (a[arr_ct] < min[ct])
            {
                min[ct] = a[arr_ct];
                temp = &a[arr_ct];
            }  
        *temp = ULLONG_MAX;
    }
    printf("%llu %llu\n", min[0] + min[1] + min[2] + min[3], max[0] + max[1] + max[2] + max[3]);
    return 0;
}
