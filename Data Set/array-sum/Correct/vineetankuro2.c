#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int lim,sum=0;
    scanf("%d",&lim);
    int a[lim];
    for(int i=0;i<lim;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
