#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n, sum=0; 
    int ar[15];
    scanf("%i", &n);
    for(int i = 0; i < n; i++){
       scanf("%i",&ar[i]);
    }
  for(int i = 0; i < n; i++)
  {sum= sum + ar[i]; }
    printf("%d\n", sum);
    return 0;
}
