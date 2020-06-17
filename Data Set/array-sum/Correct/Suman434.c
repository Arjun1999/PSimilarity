#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,arr[10001];
        scanf("%d",&n);
    long int sum=0;
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%ld",sum);
        
        return 0;
}
