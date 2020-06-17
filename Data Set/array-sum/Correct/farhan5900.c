#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t, sum=0, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        sum+=n;
    }
    printf("%d\n", sum);
    return 0;
}
