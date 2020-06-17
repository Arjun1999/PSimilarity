#include<stdio.h>
int main()
{
    int n,ar[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    
    printf("%d",&sum);
}
