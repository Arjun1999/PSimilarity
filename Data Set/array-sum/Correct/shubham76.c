#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    
    int n, i;
    int  array[1000], sum=0;
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    for(i=0; i<n; i++){
        sum = sum + array[i];
    }
    printf("%d", sum);
        
    return 0;
}
