#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, sum, i, cur;
    scanf("%d",&n);
    
    sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &cur);
        sum += cur;
    }
    printf("%d\n", sum);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
