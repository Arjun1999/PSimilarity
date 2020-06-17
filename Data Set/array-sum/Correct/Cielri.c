#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, num, sum=0, i;
    scanf("%d", &N);
    for (i=1; i<=N; i++) {
        scanf("%d ", &num);
            sum = sum + num;
    }  
    printf("%d", sum);
    return 0;
}
