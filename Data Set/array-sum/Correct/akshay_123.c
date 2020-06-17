#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, *p;
    int sum = 0;
    
    scanf("%d", &n);
    
    p = (int *)malloc(n * sizeof(int));
    
    while(n > 0) {
        scanf("%d", &(*p));
        sum = sum + *p;
        p++;
        n--;
    }
    
    printf("%d\n", sum); 
    
    return 0;
}
