#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#ifndef MAX
#define MAX 1001
#endif

int main()
{
    int i;
    int N, A;
    int sum = 0;

    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &A);
        sum += A;
    }

    printf("%d", sum);
    return 0;
}

