#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum = 0; 
    int i, n, m;
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&m);
        sum += m;
    }
    printf("%d", sum);
    return 0;
}
