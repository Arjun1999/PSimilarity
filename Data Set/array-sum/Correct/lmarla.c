#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum;
    int t; 
    int num;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &num);
        sum += num;
    }
    printf("%d", sum);
}
