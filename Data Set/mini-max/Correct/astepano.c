#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void    printIndecies(int *indecies, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", indecies[i]);
    printf("\n");
}

long int    sumof(int *indecies, int indecies_len, long int *array)
{
    long int sum = 0;
    for (int i = 0; i < indecies_len; i++)
        sum += array[indecies[i]];
    return (sum);
}

int     main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    const int k = 4;
    const int n = 5;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int arr[] = {a, b, c, d, e};
    long int max = arr[0];
    int indecies[k];
    for (int i = 0; i < k; i++)
        indecies[i] = i;
    long int sum = sumof(indecies, k, arr);
    long int min = max = sum;
    int i = 0;
    while (i >= 0)
    {
        i = k - 1;
        while (i >= 0 && indecies[i] == (n - k + i))
            i--;
        if (i < 0)
            break;
        indecies[i]++;
        while (++i < k)
            indecies[i] = indecies[i - 1] + 1;
        sum = sumof(indecies, k, arr);
        if (sum > max)
            max = sum;
        else if (sum < min)
            min = sum;
    }
    printf("%ld %ld\n", min, max);
    return 0;
}
