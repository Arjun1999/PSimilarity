#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{
    int n,i;
    int sum=0;
    int ar[6]=[1, 2, 3, 4, 10, 11];
    printf("enter the number of elenents");
    scanf("%d", &n);
    printf("array elements");
    for (i = 0; i <= 1000; i++)

    {
    
    sum = sum + ar[i];
    }

    printf("%d", sum);

    return n;
}



