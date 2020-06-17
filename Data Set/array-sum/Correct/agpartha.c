#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, num, sum = 0;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//    printf("Enter the number of integers: \n");
    scanf("%d", &num);
//    printf("Please enter %d integers\n", num);
    while (num--) {
        scanf("%d", &i);
       sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
