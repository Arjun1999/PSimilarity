#include <stdio.h>

int main() {
    int N, x, sum;
    sum = 0;
    scanf("%d", &N);
    while (N--) {
        scanf("%d", &x);
        sum += x;
    }
    printf("%d\n", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
