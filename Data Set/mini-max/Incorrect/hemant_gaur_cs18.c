#include<stdio.h>
int main()
{
    int a[1000000000],i,n,s=0,position,return0;
    scanf("%d",&n);
for(i=0 ;i<n ;i++)
scanf("%d",&a[i]);
for(position=1 ; position<=n ;position++)
scanf("%d",&position);
for(i=position-1 ; i<n ;i++)
{
    a[i]=a[i+1];
}
n=n-1;
for(i=0 ;i<n ; i++)
{
    s=s+a[i];

}
printf("%d\t",s);
return0;
}