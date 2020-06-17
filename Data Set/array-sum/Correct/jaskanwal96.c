#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t;
   scanf("%d",&t);
    int A[t],i,s=0;
   for(i=0;i<t;i++)
   {scanf("%d",&A[i]);
   s+=A[i];
   }
    printf("%d",s);
    
    return 0;
}
