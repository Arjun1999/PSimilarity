#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,arr;
    long sum=0;
    scanf("%d", &n);
   
    while(n-->0)
    { 
        scanf("%d", &arr);
        sum+=arr;
    }
    printf("%ld", sum);
    return 0;
}
