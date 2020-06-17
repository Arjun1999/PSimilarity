#include<stdio.h>
void sum(int *a,int n);
void sum(int *a,int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
        s=s+a[i];
    printf("%d",s);
}
int main()
{
    int a[50],i,n;
    //printf("enter the no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
    sum(&a,n);
    return 0 ;
}