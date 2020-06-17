#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, total, cur;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &cur);
        total += cur;
    }
    printf("%d\n", total);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
