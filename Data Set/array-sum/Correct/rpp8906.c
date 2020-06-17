#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int cases;
    scanf("%i", &cases);
    
    int a[cases];
    
    for(int i = 0; i < cases; i++)
        scanf("%i", &a[i]);
    
        int sum = 0;
    for(int k= 0;  k< cases; k++)
        sum = sum + a[k];
        
    printf("%i",sum);
    
    return 0;
}
