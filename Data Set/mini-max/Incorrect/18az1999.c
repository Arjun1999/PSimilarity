# include <stdio.h>
# include <string.h>
int main()
{
int a[5]={1,2,3,4,5},i,c,d,e,f;
c=a[1]+a[2]+a[3]+a[4];
i=a[0]+a[2]+a[3]+a[4];
d=a[0]+a[1]+a[3]+a[4];
f=a[0]+a[1]+a[2]+a[4];
e=a[0]+a[1]+a[2]+a[3];
printf("%d",e); 
printf("\t%d",c); 
return 0;
}