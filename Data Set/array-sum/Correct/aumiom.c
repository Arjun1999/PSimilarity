#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long int n,i,j,sum=0;
    scanf("%ld", &n);
    long int arr[n];
    for(i=0;i<n;i++){
        scanf("%ld", &arr[i]);
    }
    for(i=0;i<n;i++){
        sum += arr[i];
    }
    printf("%ld", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
