#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int dim, i, sum, x;
    
    scanf("%d", &dim);
    sum = 0;
    for(i=0; i<dim; i++) {
        scanf("%d", &x);
        sum +=x;
    }
    
    printf("%d", sum);
    
    return 0;
}
