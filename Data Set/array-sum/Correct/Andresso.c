#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i, soma = 0, fator;
    scanf("%d", &n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    for(i = 0; i < n; i++) {
        scanf("%d", &fator);
        soma += fator;
    }
    
    printf("%d\n", soma);

    return 0;
}
