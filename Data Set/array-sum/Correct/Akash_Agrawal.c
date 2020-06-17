#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a[1000];
    int i, length;
    int sum = 0;
    
    scanf("%d", &length);
    for(i=0;i < length; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0 ; i< length; i++){
        sum = sum + a[i];    
    }
    printf("%d", sum);
    
    return 0;
}
