#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i,sum=0;
    for(i=1;i<5;i++)
    sum=sum+a[i];
    printf("%d\n",sum);
    int num[5];
    num[0]=sum;
    for(i=2;i<=5;i++)
    {
        num[i-1]=sum-i+1;
        printf("%d\n",num[i-1]);
    }

for (i = 1; i <5; i++) 
{
  if (num[0] >num[i])
    num[0] = num[i];
}
printf("%d ",num[0]);
for (i = 1; i <5; i++)
 {
  if (num[0] < num[i])
    num[0] = num[i];
}
printf("%d", num[0]);
}
