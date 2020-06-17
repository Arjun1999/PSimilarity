#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,A[1000],sum=0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
        {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
        {
        sum=sum+A[i];
    }
    printf("%d",sum);
    return 0;
}
