#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,no_of_elements,sum = 0, element;
   scanf("%d",&no_of_elements);
    for(i = 0; i < no_of_elements; i++)
        {
        scanf("%d",&element);
        sum += element;
    }
    printf("%d",sum);
    return 0;
}
