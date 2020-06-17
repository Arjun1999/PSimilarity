#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, N, sum=0, tmp;
    
    scanf("%d", &N);
    
    for (i=0; i<N; i++)
    {
        scanf("%d", &tmp);
        sum += tmp;
    }
    
    printf("%d", sum);
    
    return 0;
}
