#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, a=0, b;
    scanf("%d", &n);
int arr[n-1];
    for ( int i=0; i<n; i++)
        {
        scanf("%d", &b);
        arr[i]=b;
    a+=arr[i];
    }
    printf("%d", a);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
