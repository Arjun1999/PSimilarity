#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t, i;
    scanf("%d", &t);
    int count = 0;
    int temp;
    for(i=0; i<t; i++){
        scanf("%d", &temp);
        count += temp;
    }
    printf("%d\n", count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
