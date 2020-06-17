#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int array[10];
 int i;
 int sum = 0;
  for ( i = 0; i < 11; i++){
   scanf("%d", &array[i]);
  }
  for (i = 0; i < 11; i++) {
   sum += array[i];
printf("%d", sum);
  }


