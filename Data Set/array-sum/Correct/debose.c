#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int sum;
    int size, i, value;
    
    sum = 0;
    scanf("%d", &size);
    for(i=0; i<size; i++) {
        scanf("%d", &value);
        sum = sum + value;
    }
    printf("%d",sum);   
    return 0;
}
