#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int qtde, sumTotal, item;
    scanf("%d", &qtde);
    int i;
    sumTotal = 0;
    for(i =0; i<qtde; i++) {
        scanf("%d", &item);
        sumTotal += item;
    }
    
    printf("%d\n", sumTotal);

    return 0;
}
