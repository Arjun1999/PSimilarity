#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t = 0;
    int r = 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d", &t);
    while(t--){
        int num;
        scanf("%d", &num);
        r+=num;
    }
    printf("%d\n", r);
    return 0;
}
