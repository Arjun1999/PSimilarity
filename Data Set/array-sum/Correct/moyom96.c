#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, cont, sum = 0, aux;
    scanf("%i",&n);
    for(cont = 0; cont < n; cont++){
        scanf("%i",&aux);
        sum += aux;
    }
    printf("%i",sum);
    return 0;
}
