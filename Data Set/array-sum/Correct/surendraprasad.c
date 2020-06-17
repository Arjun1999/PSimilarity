#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int i,k,a[1000],sum=0;
int main() {
    
    scanf("%d",&i);
    for(k=0;k<i;k++)
          {
              scanf("%d",&a[k]);
              sum=sum+a[k];
          }
printf("%d",sum);
   
    return 0;
}
