#include <stdio.h>
int main()
{
    unsigned long long int n,a[100],i,sum=0;
    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
        sum=sum+a[i];
    }
    printf("%llu",sum);

}