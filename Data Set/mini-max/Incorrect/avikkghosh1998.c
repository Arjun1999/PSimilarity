#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,s=0,s1=0;
    for (i=1;i<5;i++)
    {
        s=s+i;
    }
    for (j=5;j>1;j--)
    {
        s1=s1+j;
    }
    printf("%d %d",s,s1);
}

