#include<stdio.h>
int main()
{int a[1000],n,i,j,sum=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 for(j=0;j<n;j++)
 	sum=sum+a[j];
 printf("%d",sum);
 return 0;
}