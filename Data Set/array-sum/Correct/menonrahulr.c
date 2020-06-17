#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N[1000];
    int n;
    long int total = 0;
    scanf("%d", &n);
    register int i;
    for (i = 0; i<n; i++){
        scanf("%d", &N[i]);
        total += N[i];
    }
    printf("%ld", total);
    return 0;
}
