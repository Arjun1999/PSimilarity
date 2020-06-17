#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int x;
    int result = 0;
    
    scanf("%d", &n);
    
    for (int i; i < n; ++i) {
        scanf("%d", &x);
        result += x;
    }
    
    printf("%d\n", result);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
