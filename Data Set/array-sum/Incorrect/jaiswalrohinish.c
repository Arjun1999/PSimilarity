#include<stdio.h>
int main()
{
int arr[10];
int i=0,n,k,sum=0;
scanf("%d",&n);
while(i<n)
{
scanf("%d",&arr[i]);
i++;
}
for(k=0;k<n;k++)
{
    sum=sum+arr[k];
}
printf("%d",sum);
}
