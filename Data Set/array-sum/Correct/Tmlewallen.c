#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int* ints;
    int numOfInts;
    int sum = 0;
    int i;
    
    scanf("%d\n", &numOfInts);
    ints = malloc(sizeof(int) * numOfInts);
    for (i = 0; i < numOfInts; i++){
        scanf("%d", &ints[i]);
    }
    
    for (i = 0; i < numOfInts; i++){
        sum = sum + ints[i];
    }
    printf("%d\n", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
