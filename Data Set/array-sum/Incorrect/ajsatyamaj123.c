#include<stdio.h>
int main()
{
    int a[9],i,c=0;
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        c=c+a[i];
    }
    printf("%d",c);

    return 0;

}
