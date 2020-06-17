#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,sum;
    scanf("%d",&n);
    int arr[n];
    
    sum=0;
    for(n>=0;n--;)
{
        scanf("%d",&arr[n]);
    sum=sum+arr[n];
    }
    printf("%d", sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
