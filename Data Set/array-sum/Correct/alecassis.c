#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arreglo[1001];
    int n, x;
    scanf("%i", &n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%i", &x);
        arreglo[i] = x;
    }
    int acumulador = 0;
    
    for (i = 0; i < n; i++) {
        acumulador = acumulador + arreglo[i];
    } 
    
    printf("%i\n", acumulador);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
