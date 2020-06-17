#include <stdio.h>

int main() 
{
    /** array size, loop counter, input, and sum */
    int n = 0, i = 0, sum = 0, input = 0;
    
    /* retrieve array size */
    scanf("%d", &n);
    
    /** loop through input  */
    for (; i < n; i++)
    {
        scanf("%d", &input);
        sum += input;
    }
    printf("%d", sum);
    
    return 0;
}
