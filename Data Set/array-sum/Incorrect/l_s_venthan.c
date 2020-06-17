#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 int main()
{
    int i,n,a[10],sum=0;
   scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

   for(i=0;i<n;i++)
   {
       sum=sum+a[i];
   }
        printf("%d",sum);

    
     //return 0;
}