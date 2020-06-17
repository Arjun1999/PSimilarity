#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i[1000],j,n,sum=0;
    scanf("%d",&n);
    for(j=0;j<=n-1;j++)
        {
        scanf("%d",&i[j]);
        sum=sum+i[j];
        }
    printf("%d",sum);
    return 0;
}
