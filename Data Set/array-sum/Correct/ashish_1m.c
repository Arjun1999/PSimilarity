#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
    }
    for(int j=0; j<n; j++){
        sum=sum+a[j];
    }
    printf("%d", sum);
    return 0;
}
