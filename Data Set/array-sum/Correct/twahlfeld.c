#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t, n, sum = 0;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        sum += n;
    }
    printf("%d\n", sum);
    return 0;
}
