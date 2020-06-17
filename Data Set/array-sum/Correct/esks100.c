#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int* a, int n) {
    int s = 0;
    int i;
    
    for (i = 0; i < n; i++) {
        s += a[i];
    }
    
    return s;
}

int main() {
    int a[1000];
    int n;
    int i;
    
    scanf("%d", &n);
    
        
    for (i = 0; i < n; i++) {
        scanf("%d", a + i);
    }
    
    int s = sum(a, n);
    
    printf("%d", s);
    
    return 0;
}
