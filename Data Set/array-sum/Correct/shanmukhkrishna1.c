#include<stdio.h>
int main()
{
    int t,a[1000],i;
    long int sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%ld",sum);
    return 0;
}
