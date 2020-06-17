#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,t[10000],sum=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&t[i]);}
        for(i=0;i<n;i++){
            sum+=t[i];
        }
  printf("%d",sum);  
   return 0;
}