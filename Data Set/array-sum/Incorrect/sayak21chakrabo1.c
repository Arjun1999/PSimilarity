#include<stdio.h>
int main()
{
 int n,i=0;
 printf("Enter the number of elements:");
 scanf("%d",&n);

 int ar[n];
 int sum=0;

 for(i=0;i<n;i++)
 {
  scanf("%d",&ar[i]);
 }

 for(i=0;i<n;i++)
 {
     sum=sum+ar[i];
 }

 printf("%d",sum);
 return 0;
}
