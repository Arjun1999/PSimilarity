#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t,a,sum=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d",sum);
    return 0;
}