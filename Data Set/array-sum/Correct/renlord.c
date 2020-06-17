#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int MAX;
    int i, temp, sum;
    scanf("%d", &MAX);
    sum = 0;
    for (i = 0; i < MAX; i++) {
        scanf("%d", &temp);
        sum += temp;
    }
    printf("%d", sum);
    return 0;
}
