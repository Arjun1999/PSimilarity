#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    scanf("%d", &size);
    
    int array[size];
    
    int i,sum = 0;
    for(i=0 ; i<size; i++){
        scanf("%d",&array[i]);
        sum += array[i];
    }
    
    printf("%d", sum);    
    return 0;
}
