#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int nr;
        scanf("%d", &nr);
        sum += nr;
    }
    printf( "%d ", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
