#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr[1000], n, i, sum = 0;
    scanf("%d", &n);
    while((n < 1) || (n > 1000))
        scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        while((arr[i] < 0) || (arr[i] > 1000))
            scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d",sum);
    return 0;
}
