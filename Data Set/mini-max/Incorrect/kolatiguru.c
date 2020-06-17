#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define m 10
int main()
{
    int x[m];
    int i,n,a=0,b=0;
    n=4;
    for(i=0;i<n;i++)
    {
        scanf("%d",x[i]);
        a+=x[i];
    }
        b=x[0]+x[1]+x[2]+x[3];
    printf("%d %d",b,a);
    return 0;
}
