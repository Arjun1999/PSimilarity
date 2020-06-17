#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num;
    int sum=0;
    scanf("%d", &num);
    for(int i=0; i<num; i++) {
        int value;
        scanf("%d", &value);
        sum+=value;
    }
    printf("%d", sum);
    return 0;
}
