#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n, i, s = 0;
    
    scanf("%d", &n);
    
    while (n--)
    {
        scanf("%d", &i);
        s += i;
    }
    
    printf("%d\n", s);
    
    return 0;
}
