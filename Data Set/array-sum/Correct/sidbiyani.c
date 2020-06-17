#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int elements;
    scanf("%d",&elements);
    int array[elements];
    int sum = 0;
    for(int i=0;i<elements;i++)
        {
        scanf("%d", &array[i]);
        sum+=array[i];
        
    }
    printf("%d", sum);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
