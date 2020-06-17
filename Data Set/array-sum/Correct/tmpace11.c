#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    
    int sum[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &sum[i]);
    
    int total;
    
    for (int i = 0; i < n; i++)
        total += sum[i];
    
    printf("%d", total);
    
    return 0;
}
