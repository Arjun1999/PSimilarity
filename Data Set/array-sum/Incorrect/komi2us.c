#include<stdio.h>
#include<string.h>
int main()
{
    int n,a[100],i;
    int j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a);
    }
    for(j=0;j<n;j++)
    {
        sum=sum+a[j];
    }
    printf("%d",sum);
    return 0;

}
