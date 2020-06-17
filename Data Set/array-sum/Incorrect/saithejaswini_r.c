#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>





int main() {
    int i, n,ar[15],result=0; 
    scanf("%i", &n);
   // int *ar = malloc(sizeof(int) * n);
    for( i = 0; i < n; i++){
       scanf("%i",&ar[i]);
        result=result+ar[i];
    }
   // int result = simpleArraySum(n, n, ar);
    printf("%d\n", result);
    return 0;
}
