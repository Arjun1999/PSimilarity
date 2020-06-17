#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, r;
    int arr [1000];
    
    scanf("%d", &n);
    i = 0;
    while (i < n) {
    scanf("%d", &arr[i]);
        i++;
    }
    i = 0;
    while (i < n) {
        r += arr[i];
        i++;
        
    }
    printf("%d", r);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
