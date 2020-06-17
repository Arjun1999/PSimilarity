#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main ()
    
{
    int N, sum=0;
    int a[100];
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<N;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
