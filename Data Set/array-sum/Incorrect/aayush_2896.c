#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, A[20], res=0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
            scanf("%d", &A[i]);
            res += A[i];
    }
    
    printf("%d", res);
    
    
    return 0;
}
