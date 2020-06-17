#include <stdio.h>
int main()
{
    int a[100],i,n,s=0,d;
    scanf("%d",&d);
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }   
    for(i=0;i<d;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
    return 0;
}
