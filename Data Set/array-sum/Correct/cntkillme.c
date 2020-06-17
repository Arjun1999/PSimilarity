#include <stdio.h>

int main() {
    int size, n, sum;
    sum = 0;
    scanf("%d", &size);
    
    for(n = 0; n < size; n++) {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    printf("%d\n", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
