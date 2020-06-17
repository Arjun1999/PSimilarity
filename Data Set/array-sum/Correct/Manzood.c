#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int i;
    int total = 0;
    
    scanf("%d",  &n);
    
    int ar[n];
    
    for (i = 0; i < n; i++)
        {
        scanf("%d", &ar[i]);
        total += ar[i];
    }
        
    printf("%d", total);
    
    return 0;
}
