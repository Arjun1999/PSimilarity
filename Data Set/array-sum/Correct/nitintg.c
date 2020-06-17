#include<stdio.h>
int main()
{
    int t, num;
    long long int sum = 0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
        sum = sum + num;
    }
    printf("%lld\n",sum);
    return 0;
}