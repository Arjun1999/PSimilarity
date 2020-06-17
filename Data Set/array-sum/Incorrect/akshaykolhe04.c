#include<stdio.h>
int main()
{
    int n,total=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        total+=a[i];
    }
    printf("\n%d",total);
    return 0;
}
