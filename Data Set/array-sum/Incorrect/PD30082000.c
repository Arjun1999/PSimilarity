#include <stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d",sum);    
}