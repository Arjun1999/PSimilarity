#include<stdio.h>
int main()
{
  int i,a[10],sum=0,sum1=0;
  for(i=1;i<=5;i++)
{
    scanf("%d",&a[i]);
}
 for(i=1;i<=5;i++)
 {
     sum=sum+a[i];
 }
 for (i = 1; i < 5; i++) 
 {
   sum1 = sum1 + a[i];
 }
sum=sum-a[0];
printf("%d %d",sum,sum1);
}