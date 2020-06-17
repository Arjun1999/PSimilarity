#include<stdio.h>
int main()
{
    int n,i,sum=0,array[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    printf("%d",sum);
}
