#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N, A[1000], i, total = 0;
    scanf ("%d", &N);
    for (i = 0 ; i < N ; ++i) {
        scanf ("%d", &A[i]);
        total = total + A[i];
    }
    printf ("%d\n", total);
    return 0;
}
