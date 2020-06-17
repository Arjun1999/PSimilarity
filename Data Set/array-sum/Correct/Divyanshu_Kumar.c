#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, sum=0,i, k;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        {
        scanf("%d", &k);
        sum = sum+k;
    }
    printf("%d", sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
