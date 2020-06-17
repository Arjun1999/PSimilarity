#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, dim, sum = 0, x;
    
    scanf("%d", &dim);
    for( i = 0; i < dim; i++){
        scanf("%d", &x);
        sum += x;
    }
    
    printf("%d", sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
