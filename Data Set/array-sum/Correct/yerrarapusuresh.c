#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size ;
    int i , input , prev  = 0  ;
    scanf("%d",&size);
    for( i = 0 ; i < size ; i++)
        {
        scanf("%d",&input);
        prev += input ;
        input = 0 ;
    }
    printf("%d",prev);
        
    return 0;
}
