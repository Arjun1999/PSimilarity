#include<stdio.h>
int main()
{
int A[1000],n,i,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&A[i]); 
}
for(i=0;i<n;i++)
{
sum=sum+A[i];
}
printf("%d",sum);
return 0;
}

