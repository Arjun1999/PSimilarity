#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    long int sum =0;
     int x[1000];
scanf("%d", &n);
    for (int i = 0; i < n; i++){
scanf("%d", &x[i]);
        sum+=x[i];
    }
    printf("%ld", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
