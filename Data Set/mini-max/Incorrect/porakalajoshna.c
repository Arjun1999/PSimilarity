#include<stdio.h>
int main()
{
    int i,a[100],s=0,s1=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<5;i++)
    {
        if(a[i]!=a[0])
        {
          s=s+a[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i]!=a[4])
        {
          s1=s1+a[i];
        }
    }
    printf("%d %d",s1,s);
}
