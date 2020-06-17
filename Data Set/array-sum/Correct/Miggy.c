#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n = 0, num = 0 , temp = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        //if( 1 <= n && n <= 100){
            
            scanf("%d", &temp);
            
            num += temp;
            
        //}
    }
    
    printf("%d\n", num);
    
    return 0;
}
