#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int digits = 0;
    int sum = 0;
    int curr = 0;
    scanf("%d", &digits);
    for (int i=0; i<digits; i++) {
        scanf("%d", &curr);
        sum = sum + curr;
    }
    printf("%d", sum);
    return 0;
}
