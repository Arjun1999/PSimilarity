#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,j,k,l=0;
    scanf("%d\n",&i);
    int ar[i];
   for(j=0;j<i;j++)
       {
       scanf("%d",&k);
       ar[j]=k;
       l=l+ar[j];
   }
   printf("%d",l);
    return 0;
}
