#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,n,arr[1001];
    long int sum;
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%ld",sum);
    return 0;
}
