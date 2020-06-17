#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
     int a ,arr[10] , sum = 0 , i ;
     scanf("%d",&a);
     for (i=0;i<a;i++)
      scanf("%d",&arr[i]);
     for (i=0;i<a;i++)
         sum = sum + arr[i];
     for (i=0;i<1;i++)
         printf("%d",sum);
    
      
    

    return 0;
}
