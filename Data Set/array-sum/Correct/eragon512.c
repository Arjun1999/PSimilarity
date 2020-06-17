#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N,i,tmp;
    long sum=0;
    scanf("%d",&N);
    while(N--)
    {
        scanf(" %d",&tmp);
        sum += tmp;
    }
    printf("%ld",sum);
    return 0;
}
