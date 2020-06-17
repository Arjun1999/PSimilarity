#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{ int a[10],n,b[10],i;
  printf("size of array:");
  scanf("%d",&n);
   printf("enter elements to array");
 for(i=0;i<=n;i++)
 scanf("%d",a[i]);
 for(i=0;i<=n;i++)
{
    b[i]=a[i]+a[i+1];
}
printf("%d",b[i]);
return 0;
}