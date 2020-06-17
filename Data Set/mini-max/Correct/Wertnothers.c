//Solution in C
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

//returns the min or max value in a array
//mode = 0 -> min
//mode = 1 -> max
//returns -1 if error occurs
long int getMinOrMaxVal(long int vals[], int size, int mode)
{
    long int temp = vals[0];
    switch (mode)
    {
        case 0: //lowest value
            for (int i = 1; i < size; i++)
            {
                if (temp > vals[i])
                    temp = vals[i];
            }
            break;

        case 1: //largest value
            for (int i = 1; i < size; i++)
            {
                if (temp < vals[i])
                    temp = vals[i];
            }
            break;

        default:
            temp = -1;
            break;
    }
    return temp;
}

long int minOrMaxSum(long int vals[], int size, int mode)
{
    long int sumTot = 0;

    for (int i = 0; i < size; i ++)
        sumTot += vals[i];

    long int temp = 0;
    long int sums[size];

    for (int i = 0; i < size; i++)
    {
        temp = 0;

        temp = sumTot - vals[i];

        sums[i] = temp;
    }

    long int result = getMinOrMaxVal(sums, size, mode);
    return result;
}

int main()
{
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int vals[5] = {a, b, c, d, e};

    long int sum_1 = minOrMaxSum(vals, 5, 0);
    long int sum_2 = minOrMaxSum(vals, 5, 1);
    printf("%ld %ld", sum_1, sum_2);

    return 0;
}