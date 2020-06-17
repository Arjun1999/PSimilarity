#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, i, sum=0, temp;
    
    scanf("%d\n", &t);
    
    for (i=0; i<t; i++) {
        scanf("%d ", &temp);
        sum += temp;
    }
    
    printf("%d", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
