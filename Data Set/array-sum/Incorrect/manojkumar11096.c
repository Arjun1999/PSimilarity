#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[7],i,j,n,sum=0;
    scanf("\n%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d ",&a[i]);
        sum=sum+a[i];
        }
    printf("%d",sum);
}
    
