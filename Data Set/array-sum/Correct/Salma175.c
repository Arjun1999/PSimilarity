#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,sum=0;
    scanf("%d\n",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&array[i]);
        sum=sum+array[i];
    }
    printf("%d",sum);
    return 0;
}
