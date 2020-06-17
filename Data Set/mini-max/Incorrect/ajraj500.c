#include<stdio.h>
int main()
{
    int i,A[100],n,s=0,s1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&A[i]);
    }
    for(i=0;i<n-1;i++)
   {
       s=s+A[i];
   }
   for(i=n;i>=1;i++)
   s1=s1+A[i];
   printf("%d %d",s,s1);
   return 0;


}

