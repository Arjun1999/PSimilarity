#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
    int i,sum1=0,sum2=0;
    for(i=1;i<5;i++)
    {
        sum1=sum1+i;
    }
    printf("%d\t",sum1);
    sum2=0;
     for(i=2;i<=5;i++)
    {
        sum2=sum2+i;
    }
    printf("%d\n",sum2);
    
    return 0;
}
