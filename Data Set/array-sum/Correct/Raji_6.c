#include<stdio.h>
main()
{
int n,i;
scanf("%i",&n);
int a[n],s=0;
for(i=0;i<n;i++)
{
	scanf("%i",&a[i]);
}
for(i=0;i<n;i++)
{
	s=s+a[i];
}
printf("%i",s);
}