
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[100];
    int i,s=0,j;
    int max=0,min=10000;

    printf("enter the array");
    for(i=0;i<=100;i++)
    scanf("%d",&a[i]);


    for(j=0;j<=100;j++)
    { s=0;
        for(i=0;i<=100;i++)
    {
        if(i!=j)
        {
            s=s+a[i];
        }
    }
    if(s>max)
    max=s;
    if(s<min)
    s=min;
    }
    printf("%d",max);
    printf("%d",min);
    return 0;
}
