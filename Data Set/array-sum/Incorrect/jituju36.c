#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,arr[n],sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
