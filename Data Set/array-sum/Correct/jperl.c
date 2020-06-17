#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t, x, sum=0;
    scanf("%d", &t);
    for (int i=0; i<t; ++i) {
        scanf("%d", &x);
        sum += x;
    }
    printf("%d", sum);
    
    return 0;
}
