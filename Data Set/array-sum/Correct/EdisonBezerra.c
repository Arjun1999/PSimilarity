#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, *i, sum = 0;
    
    scanf("%d\n", &n);
    i = malloc(sizeof(int)*n);
    
    for (int j = 0; j < n; j++) {
        scanf("%d ", &i[j]);
        sum += i[j];
    }
    
    free(i);
    printf("%d", sum);
    
    return 0;
}
