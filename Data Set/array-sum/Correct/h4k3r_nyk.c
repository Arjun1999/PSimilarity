#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int n,i,sum=0;
    scanf("%lld",&n);
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%lld",sum);
    return 0;
}
