#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int many, input, result = 0;
    scanf("%d", &many);
    
    for(int i = 0; i < many ; i++) {
        scanf("%d", &input);
        result += input;
    }
    printf("%d", result);
    
    return 0;
}
