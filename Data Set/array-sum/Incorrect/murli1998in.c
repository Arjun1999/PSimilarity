#include<stdio.h>
int main()
{
    int a[30];
    int i,s=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];

    }
    printf("%d",s);
    return 0;
    
}