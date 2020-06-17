#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int a[1000],b,c,i,j = 0;
      scanf("%d",&b);
          for(i = 0;i<b;i++)
         {
         scanf("%d ",&a[i]); 
         j = j+a[i];
     }
    
    printf("%d",j);
     
    return 0;
}