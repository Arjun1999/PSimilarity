#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{  
    int arah[1000], i, n, j, sum = 0;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        {
        scanf("%d", &arah[i]);
        
        sum += arah[i];
    }
    printf("%d\n", sum);
    
    return 0;
}
