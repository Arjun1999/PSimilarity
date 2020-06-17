#include<stdio.h>
int main()
{
    int a[50],sum=0,n;
    scanf("%d",&n);
    for(int b=0;b<n;b++)
    {scanf("%d",&a[b]);
}
 for(int i=0;i<n;i++)
 {
     sum+=a[i];
 }
printf("%d",sum);
    return(0);
}