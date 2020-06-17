#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int temp;
    int sum = 0;
    scanf("%d",&n);
    
    for (int i = 0; i<n; i++){
        scanf("%d",&temp);
        sum = sum + temp;
    }
    
    printf("%d", sum);
    
    return 0;
}
