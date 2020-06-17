#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    int curr;
    int sum = 0;
    
    scanf("%d", &N);
    while(N--){
        scanf("%d", &curr);
        sum += curr;
    }
    
    printf("%d\n", sum);
    return 0;
}
