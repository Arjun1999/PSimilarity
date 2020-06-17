#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max 1000
int main() {
    
    int i,sum=0,n;
    int arr[max];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
