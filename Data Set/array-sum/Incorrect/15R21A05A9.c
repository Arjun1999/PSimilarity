#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    intn,i,a,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d,&a");
        sum=sum+a;
    } 
    printf("%d",sum);
    return 0;
}
