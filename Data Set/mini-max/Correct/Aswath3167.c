#include<stdio.h>
int main()
{
long int a[10],min,max,swap;
int i,j;
for(i=0;i<5;i++)
{
scanf("%ld",&a[i]);
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[j]>a[i])
{
swap=a[i];
a[i]=a[j];
a[j]=swap;}
}
}
min=a[0]+a[1]+a[2]+a[3];
max=a[1]+a[2]+a[3]+a[4];
printf("%ld",min);
printf("% ld",max);
return 0;
}
