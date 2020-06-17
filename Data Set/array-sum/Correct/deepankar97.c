#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int i, sum=0, A[1000], n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &A[i]);
    for(i=0; i< n; i++)
        sum = sum + A[i];
    printf("%d", sum);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
