#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int simpleArraySum(int n, int* ar) {
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += ar[i];
       
    }
    return sum;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = ;
    for(int i = 0; i < n; i++){
       scanf("%i",&ar[i]);
    }
    int result = simpleArraySum(n, ar);
    printf("%d\n", result);
    return 0;
}
