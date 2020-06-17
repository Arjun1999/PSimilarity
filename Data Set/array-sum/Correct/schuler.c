#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned int num_elements, element;
    unsigned int sum = 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int tmp = scanf("%u\n", &num_elements);
    
    for(int x = 0; x < num_elements; x++)
    {
            tmp = scanf("%u ", &element);
            sum += element;
    }
    printf("%u",sum);
    return 0;
}
