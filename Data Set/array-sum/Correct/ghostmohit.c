#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,i,s=0;
   scanf("%d",&n);
   int a[n-1];
   for(i=0;i<n;i++)
       {
       scanf("%d",&a[i]);
       s=s+a[i];
       }
  printf("%d",s);
   
    return 0;
}
