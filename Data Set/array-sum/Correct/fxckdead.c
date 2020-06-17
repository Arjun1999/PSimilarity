#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);

    if(!(n >= 1) || !(n <= 1000) ){
        return 0;
    }

    int a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    
    printf("%d", sum);
    
    return 0;
}