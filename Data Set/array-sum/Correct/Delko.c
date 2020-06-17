#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,a,l,sum;
    sum=0;
    scanf("%d\n",&a);
   for (i=1;i<=a;i++) {
       scanf(" %d",&l);
       sum +=l;
       
   }
    
  printf("%d",sum);
}
