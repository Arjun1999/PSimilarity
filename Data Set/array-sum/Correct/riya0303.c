#include<stdio.h>
int main()
{
int x[1000],n;
int i;
    unsigned sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
sum=sum+x[i];
}
printf("%ld",sum);
return 0;
}
