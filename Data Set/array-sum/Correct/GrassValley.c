#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N;
    scanf("%d ", &N);
    int sum = 0, val, k;
    for ( k = 0; k < N; k++ ) {
        scanf("%d ", &val);
        sum += val;
    }
    
    printf("%d\n", sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
