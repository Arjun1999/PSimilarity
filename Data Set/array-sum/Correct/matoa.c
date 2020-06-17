#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i;
    int sum = 0;
    scanf("%d", &n);
    
    int t[n];
    
    for(i = 0; i < n; i++) {
        scanf("%d", &t[i]);
        sum = sum + t[i];
    }
    
    printf("%d", sum);
    
    return 0;
}
