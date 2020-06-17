#include<stdio.h>
int main()
{
    int i,n,sum=0,a[6];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
}
