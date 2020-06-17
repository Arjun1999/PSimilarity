#include<stdio.h>
int main()
{
    int n,i,min=0,max=0;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
scanf("%d",&a[i]);
        min=min+a[i];
    }
    printf("%d",min);
}