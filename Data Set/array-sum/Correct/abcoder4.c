#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, sum=0, i;
    scanf("%d", &N);
    int ary[N];
    for (i=0; i<N; i++){
        scanf("%d", &ary[i]);
        sum+=ary[i];
    }
    printf("%d", sum);
    return 0;
}
