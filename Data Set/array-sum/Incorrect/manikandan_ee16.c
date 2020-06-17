#include<stdio.h>
int main()
{
   int a[10],i,c,v=0;
   scanf("%d",&c);
   for(i=0;i<c;i++)
   {
       scanf("%d",&a[i]);
       v=v+a[i];
   }
   printf("%d",v);
   return 0;
}
