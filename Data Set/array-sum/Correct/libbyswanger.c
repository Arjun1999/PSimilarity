#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int sum = 0, len;
    scanf("%d", &len);
    
    for (int i = 0; i < len; i++) 
    {
        int dig;
        scanf("%d", &dig);
        sum = sum + dig;
    }
    
    printf("%d", sum);
    return 0;
}
