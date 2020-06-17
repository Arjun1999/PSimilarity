#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size, ndx,add, sum = 0;
    scanf("%d", &size);
    for(ndx = 0; ndx < size; ndx++) {
        scanf("%d", &add);
        sum += add;
    }
    printf("%d", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
