#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int idx = 0 , sum = 0, num = 0;
    scanf("%d", &num);
    int temp;
    for (idx = 0; idx < num; idx++) {
        scanf("%d", &temp);
        sum += temp;
    }
    
    printf("%d", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
