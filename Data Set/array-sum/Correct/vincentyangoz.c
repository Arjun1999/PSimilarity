#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int a;
    int i;
    int sum;
    
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a);
        sum += a;
    }
    printf("%d", sum);
    return 0;
}
