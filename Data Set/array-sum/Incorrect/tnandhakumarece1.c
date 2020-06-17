#include<stdio.h>

int main()
{
int a[100];
int s=0,i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
s+=a[i];
}
printf("%d",s);

}



