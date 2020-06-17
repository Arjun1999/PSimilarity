#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned long long sum=0;
    int temp, n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &temp);
        sum+=temp;
    }
    printf("%llu\n", sum);
    return 0;
}
