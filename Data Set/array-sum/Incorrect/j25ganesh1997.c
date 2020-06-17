#include<stdio.h>
int main()
{
    int a[100],n,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=a[i];i++)
    sum=sum+a[i];
    printf("%d",sum);
    return 0;

}
