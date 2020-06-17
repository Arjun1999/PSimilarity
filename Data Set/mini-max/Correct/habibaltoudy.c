#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    int i=0;
    int j=0;
    long int sum = 0;
    long int min =0;
    long int max =0;
    while(i<5)
    {
        sum = 0;
        for(j=0; j<5;j++)
        {
            if (j!=i)
            {
                sum+=arr[j];
            }
        }
        if(i==0)
            min = sum;
        if (sum > max)
            max = sum;
        if(sum < min)
            min = sum;
        i++;
        
    }
    printf("%ld %ld", min, max);
    return 0;
}
