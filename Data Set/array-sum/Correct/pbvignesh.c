#include<stdio.h>
int main()
    {
    long int n,a,i,sum=0;
    scanf("%ld",&n);
    while(n--)
        {
        scanf("%ld",&a);
        sum+=a;
    }
    printf("%ld",sum);
    return 0;
}