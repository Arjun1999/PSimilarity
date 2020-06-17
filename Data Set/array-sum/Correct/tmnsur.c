#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int size, i, sum = 0;
    scanf("%d", &size);
    
    i = size;
    while(i--)
    {
        int temp;
        scanf("%d", &temp);
        
        sum += temp;
    }

    printf("%d", sum);
    
    return 0;
}
