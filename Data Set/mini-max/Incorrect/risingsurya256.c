#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[5],i,n=5,sum=0,result=0;
    for(i=0;i<n-1;i++)
    {
        sum=sum+a[i]; 
        return sum;
    }
    for(i=1;i<=n;i++)
{
    result=result+a[i];
    return result;
}
printf("%d  ",sum);
printf("%d",result);

return 0;
}

