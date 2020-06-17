#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 1000

int main() {
    unsigned int n;
    unsigned int a[MAX];
    int i ;
    unsigned int sum = 0; 
    
    scanf("%u", &n);
    if (!n)
        return 0;
    for (i = 0; i < n; i++) {
        scanf("%u", &a[i]);
        sum = sum + a[i];
    }
    
    printf("%u\n", sum);
    return 0;
}
