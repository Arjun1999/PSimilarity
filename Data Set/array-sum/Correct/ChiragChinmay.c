#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int i=0;
    long int sum=0;
    int array[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("%ld",sum);
    return 0;
}
