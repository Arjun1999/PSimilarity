#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);
    int i;
    int sum = 0;
    int temp = 0;
    for( i=0; i<N; i++){
        scanf( "%d", &temp);
        sum += temp;
    }
    printf( "%d", sum );
    return 0;
}
