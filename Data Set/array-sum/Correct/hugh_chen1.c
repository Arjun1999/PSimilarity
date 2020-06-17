#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    scanf("%d", &i);
    int sum = 0;
    
    for( int a = 0; a < i; a = a + 1 ) {
        int val;
        scanf("%d", &val);
        sum = sum + val;
    }
    printf("%d", sum);
    return 0;
}
