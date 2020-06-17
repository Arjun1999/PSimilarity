#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,n,arr[1000];
    long int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%ld",sum);
    return 0;
}
