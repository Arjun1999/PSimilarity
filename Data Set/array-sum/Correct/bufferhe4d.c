#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num;
    int sum = 0;
    int test;
    scanf("%d", &test);
    
    for(int i = 0; i < test; i++) {
        scanf("%d", &num);
        
        sum+=num;   
    }   
    printf("%d", sum);

    return 0;
}
