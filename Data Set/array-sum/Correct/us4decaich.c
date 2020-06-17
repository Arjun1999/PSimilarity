#include<stdio.h>
int main()
{
    int i=0,n,b=0;


    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b=b+a[i];
    }
    printf("%d",b);
    return 0;
}
