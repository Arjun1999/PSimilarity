#include<stdio.h>
int main()
{
    int i,j,n,sum[0]={0},total1,total2;
    int decending (int sum[],int n);
    int ascending(int sum[],int n);
    scanf("%d\n",&n);
    int a[n];
    scanf("%d ",&a[0]);
    for(i=1;i<n;i++)
    {
        scanf("%d ",&a[i]);
        for(j=0;j<n;j++)
        {
            sum[j]=sum[j]+a[j];
            
           
        }
    }
         total1=decending(sum,n);
            total2=acending(sum,n);
    printf("%d %d",total1,total2);
    return 0;
}
int decending (int sum[],int n)
{ 
    int i,small;
    small=sum[0];
    for(i=1;i<n;i++)
    {
    if(small>sum[i])
    {
        small=sum[i];
    }
        return small;
}
int acending(int sum a[],int n)
{
    int i,large;
    large=sum[0];
    for(i=1;i<n;i++)
    {
    if(large<sum[i])
    {
        large=sum[j];
    }}
        return large;
}