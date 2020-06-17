#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char arr[100];
    int sum1=,sum2=0;
    int N;
    scanf("%s",arr);
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<N-1;i++)
    {
        sum1+=arr[i];

    }
    for(i=0;i<N;i++)
    {
        sum2+=arr[i];
    }
    printf("%d %d",sum1,sum2);
}
