#include<stdio.h>
int main()
{
int size,i,sum1=0,sum2=0;
int a[5];
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size-1;i++)
{
sum1=sum1+a[i];
}
printf("%d",sum1);
for(i=1;i<size;i++)
{
sum2=sum2+a[i];
}
printf(" %d", sum2);
return 0;
}
    
