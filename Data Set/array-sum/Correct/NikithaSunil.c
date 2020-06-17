#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int *array;
    int i = 0;
    int sum = 0;
    scanf("%d ", &n );
    
    array = malloc(n * sizeof(int));
    for ( i= 0; i< n; i++) {
      scanf(" %d ", &array[i]);
      sum += array[i];
     }
    printf ("%d", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
