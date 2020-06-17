#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, temp;
    long long sum = 0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &temp);
        sum+=temp;
    }
    
    printf("%lld\n", sum);
    
    return 0;
}
