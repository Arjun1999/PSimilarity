#include<stdio.h>
int main()
{
  int a[30],i,n;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<=n-+1;i++){
        sum=sum+a[i];
    }
    
   printf("%d",sum);
    return 0;
}