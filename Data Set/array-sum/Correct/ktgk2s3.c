#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int totNum = 0;
    int i = 0, inpNum = 0, retSum = 0;

    
    
    scanf("%d", &totNum);
    for(i = 0; i < totNum; i++) {
        scanf("%d", &inpNum);
        retSum += inpNum;
    }
    printf("%d\n", retSum);
    return 0;
}
