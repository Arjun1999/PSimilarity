#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n=0,i,sum;
    scanf("%d\n", &n);
    if (n<1 || n>1000)
        return -1;
    int a[n];
    for (i=0; i<n; i++)
        scanf("%d ",&a[i]);
    for (i=0; i<n; i++)
        sum += a[i];
    printf("%d\n",sum);
    return 0;
}
