#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int item, len, sum = 0;
    scanf("%d\n", &len);
    for (int i =0 ; i < len; ++i) {
        scanf("%d ", &item);
        sum += item;
    }
    printf("%d\n", sum);
    return 0;
}
