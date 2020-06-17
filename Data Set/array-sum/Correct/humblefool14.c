#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

int a[1000];
    int t,i,sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        }
    printf("%d",sum);
    return 0;
}
