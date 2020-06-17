#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int T;
    unsigned long int output = 0;
    int j;
    
    scanf("%d", &T);

    for (j = 0; j < T; j++) {
        unsigned int num;
        
        scanf("%d", &num);

        output += num;
    }

    printf("%lu\n", output);

    return 0;
}
