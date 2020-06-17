#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numbers[1000], sum, i, n;
    
    scanf("%d", &n);
    
    sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    
    printf("%d", sum);
    
    return 0;
}
