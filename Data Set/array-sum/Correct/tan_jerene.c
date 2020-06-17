#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n = 0;
    int val = 0;
    int sum = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &val);
        sum += val;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    printf("%d", sum);
    return 0;
}
