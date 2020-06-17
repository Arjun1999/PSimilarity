#include<stdio.h>
#include<stdlib.h>
main()
{ int n,*a,i,sum=0;
   scanf("%d",&n);
   a=(int *)malloc(sizeof(int));
   for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
   } 
 for(i=0;i<n;i++)
     sum=sum+a[i];
 printf("%d",sum);
  }
    