#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int arrayRange, i, sum = 0;
    scanf("%d", &arrayRange);
    int array[arrayRange];
    for (i = 0; i < arrayRange; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("%d", sum);
    return 0;
}
