#include<stdio.h>
int main()
{
    int a[1000000000],i,n,sum=0,min,max,s[10];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
             sum=sum+a[i];
    }
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
        s[i]=sum-a[i];
    for(i=0;i<n;i++)
    {
    min=max=a[0];
    if(min<s[i])
        min=s[i];
     if(max>s[i])
            max=s[i];
    }
    printf("%d\n%d",sum-min,sum-max);
    return 0;
}