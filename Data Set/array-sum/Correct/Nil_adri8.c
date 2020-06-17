#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
      int a[2000], n ,sum = 0,i;

    //printf("Enter the no of elements:");
    scanf("%d", &n);
   //printf("\nEnter the elements:");
    for(i = 0; i < n; ++i)
        scanf("%d",&a[i]);

    
    for(i = 0; i < n; ++i)
        sum += a[i];
    
    printf("%d", sum);
    return 0;  
}
