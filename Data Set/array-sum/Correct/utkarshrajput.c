#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, temp;
    int sum = 0, i;
    
    scanf("%d", &n);
    for(i = 0;i < n; i++){
        scanf("%d", &temp);
        sum += temp;
    }
    
    printf("%d", sum);
    
    return 0;
}
