#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i, k, sum, val;
    scanf("%d", &i);
    sum = 0;
    for(k = 0; k < i; ++k) {
        scanf("%d", &val);
        sum += val;
    }
    printf("%d", sum);
    return 0;
}
