#include <stdio.h>
int main ()
{
    int a[5],s1=0,s2=0,h1,h2,i;
   
   for (i=0;i<5;i++)
    scanf("%d",&a[i]);

    for (i=0;i<5;i++)
    {s1 = s1 + a[i];
    h1 = s1 - a[0];}
    

   for (i=0;i<5;i++)
   {s2 += a[i];
    h2 = s2 - a[4];}
    
   
   printf ("\n%d %d",h2,h1);
   return 0;
}