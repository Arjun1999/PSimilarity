#include<stdio.h>
#include<stdlib.h>
int main()
    {
    long long int n,i,a,s=0;
    scanf("%llu",&n);
    for(i=0;i<n;i++)
        {
        scanf("%llu",&a);
        s=s+a;
    }
    printf("%llu",s);
    return 0;
}