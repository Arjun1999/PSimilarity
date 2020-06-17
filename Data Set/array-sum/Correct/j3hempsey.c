#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, nums, input, sum;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d", &nums);
    
    for (i = 0; i < nums; ++i){
        scanf("%d", &input);
        sum += input;
    }
    printf("%d", sum);
    return 0;
}
