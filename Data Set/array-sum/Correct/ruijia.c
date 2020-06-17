#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    int sum = 0;
    int a;
    
    scanf("%d", &n);
    
    while(n--){
        scanf("%d", &a);
        sum += a;
    }
    
    printf("%d\n", sum);
    
    return 0;
}
