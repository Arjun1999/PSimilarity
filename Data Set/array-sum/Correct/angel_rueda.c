#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int n;
    int buffer;
    int sum = 0;
    
    scanf("%d", &n);
    
    if( n > 0 ){
        
        for(int i = 0; i < n; i++){
            scanf("%d", &buffer);
            sum += buffer;
        }
        
    }
    
    printf("%d", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
