#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, i=0, num, sum=0;
    scanf("%d", &T);
    for(i=0; i<T; i++) {
        scanf("%d", &num);
        sum = sum+num;
    }
    
    printf("%d", sum);
    return 0;
}
