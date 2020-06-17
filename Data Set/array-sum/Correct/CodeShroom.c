#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum, N, tmp;
    
    scanf("%d", &N);
    
    sum = 0;
    while(N > 0)
    {
        scanf("%d", &tmp);
        sum += tmp;
        --N;
    }
    printf("%d", sum);
    return 0;
}
