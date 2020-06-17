#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int n;
    scanf("%u",&n);
    long long int arr[n],sum=0;
    int i;
    for(i=0;i<n;i++)
        {
        scanf("%u",&arr[i]);
    }
    for(i=0;i<n;i++)
        {
        sum=sum+arr[i];
    }
    printf("%u",sum);
    return 0;
}
