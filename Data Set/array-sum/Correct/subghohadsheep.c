#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n_t;
    int n_i;
    int n_value;
    int n_sum;
    
    scanf("%d", &n_t);
    
    for(n_i = n_sum = 0; n_i < n_t; ++n_i) {
        scanf("%d", &n_value);
        
        n_sum += n_value;
    }
    
    printf("%d\n", n_sum);
    
    return 0;
}
