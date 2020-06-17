#include<stdio.h>
#include<conio.h>
int simpleArraySum(int n,int ar[100])
{
    int s=0;
    for(int i=0;i<n;i++)
    s=s+ar[i];
    return s;
}
void main()
{
int n,ar[100];
scanf("%d",&n);
for(i=0;i<n,i++)
scanf("%d",ar[i]);
printf(" \n %d ",simpleArraySum(n,ar));
}
