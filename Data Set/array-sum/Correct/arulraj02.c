#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    int iLoop ;
    int iInput;
    int sum = 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d", &N);
    
    if ((N > 1000) || (N < 1)) {
        printf("Invalid Entry\n");
        return -1;
    }
    
    iLoop = 0;
   // printf("Enter th number of elements:\n");
    for(iLoop =0; iLoop < N; iLoop++) {
        scanf("%d", &iInput);
        sum += iInput;
    };
    printf("%d",sum);
    
    return 0;
}
