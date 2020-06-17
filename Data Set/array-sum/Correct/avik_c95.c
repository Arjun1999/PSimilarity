#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

 int array[1000];
 int i,n;
    scanf("%d",&n);
 int sum = 0;
  for ( i = 0; i < n; i++){
   scanf("%d", &array[i]);
  }
  for (i = 0; i < n; i++) {
   sum += array[i];
  }
printf("%d", sum);
       
    return 0;
}
