#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int long SumMin = 0;
    int long SumMax = 0;
    int long Sum = 0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for (int i=0; i<5; i++)
    {
        Sum = 0;
        for (int j=0; j<5; j++)
        {
            if (j!=i)
            {
                Sum = Sum + arr[j];
            }
        }
        if (i==0)
        {
            SumMax = Sum;
            SumMin = Sum;
        }
        else
        {
            if (Sum>SumMax)
                SumMax = Sum;
            if (Sum<SumMin)
                SumMin = Sum;
        }
    }
    printf("%li %li", SumMin, SumMax);
    return 0;
}
