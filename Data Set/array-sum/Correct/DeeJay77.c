#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int ar[n];
    int i;
    for(i = 0; i < n; i++) {
            scanf("%d", &ar[i]);
    }
    int s = 0;
    for(i = 0; i < n; i++) {
           s = s + ar[i];
    }
    printf("%d", s);
    return 0;
}
