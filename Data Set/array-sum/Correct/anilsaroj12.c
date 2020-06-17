#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define N 1000
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int array[N] ,n, sum = 0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum = sum + array[i];
    }
    printf("%d ",sum);
    
    return 0;
}
