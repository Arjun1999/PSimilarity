#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count;
    scanf("%d", &count);
    int sum = 0;
    int array[count];
    
    for(int i = 0; i < count; i++)
    {
       scanf("%d", &array[i]);
    }
    
    for(int i = 0; i < count; i++)
    {
       sum += array[i];
    }
    printf("%d", sum);
    return 0;
}
