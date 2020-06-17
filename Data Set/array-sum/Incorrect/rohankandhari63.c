#include<stdio.h>
int main()
{ int x,i,sum=0, a[20];
scanf("%d",&x);
for(i=0;i<x;i++)
{scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("%d",sum);

}
