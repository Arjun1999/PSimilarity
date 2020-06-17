#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, sum, add;
    sum = 0;
    
    //Read the size of array and then read contents of array.
    scanf("%d", &n);
    for (i = 0; i < n; ++i){
        scanf("%d", &add);
        sum += add;
    }
    
    //Print solution.
    printf("%d", sum);
    
    return 0;
}
