#include<stdio.h>
int main()
{
  int a[1000],n,sum=0,i=0;
  scanf("%d",&n);
  if(n>=1 && n<=1000)
  {
   while(i<n)
   {
    scanf("%d",&a[i]);
	if(a[i]>=0 && a[i]<=1000)
     sum=sum+a[i];
	else
	exit(0);
	i++;
   }
   printf("%d",sum);
  }
  else
  {
    exit(0);
  }	     
 return 0;
}

