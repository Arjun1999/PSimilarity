#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int count;
    scanf("%i", &count);
    
    int sum = 0;
    
    for (int i = 1; i <= count; i++)
    {
        int nextval;
        scanf("%i", &nextval);
        
        sum += nextval;
    }
    
    printf("%i\n", sum);
    
    return 0;
}
