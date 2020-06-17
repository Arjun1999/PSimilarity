#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long int temp, min = 0, max = 0;
    int i, j;
    
    long long int *list = malloc(sizeof (long long int) * 5);
    scanf("%lld %lld %lld %lld %lld", &list[0], &list[1], &list[2], &list[3], &list[4]);
    
    /* sort array in ascending order */
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    
    j = 4;
    for (i = 0; i < 4; i++)
    {
        min += list[i];
        max += list[j];
        j--;    
    }
    
    printf ("%lld %lld", min, max);
    
    return 0;
}
