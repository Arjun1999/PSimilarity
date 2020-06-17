#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void) {

 int i,n;
 int sum = 0;
   scanf("%d",&n);
     int array[n];
  for ( i = 0; i < n; i++){
   scanf("%d", &array[i]);
  }
  for (i = 0; i < n; i++) {
   sum += array[i];
  }
printf("%d", sum);
return 0;
}