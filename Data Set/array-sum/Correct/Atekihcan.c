#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i, sum, N, tmp;
    scanf("%d", &N);
    sum = 0;
    for (i = 0; i < N; i++) {
        scanf("%d", &tmp);
        sum += tmp;
    }
    printf("%d", sum);
    return 0;
}
