#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int len,i;
    scanf("%d",&len);
    int arr[len];
    long long sum=0;
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%lld",sum);
    return 0;
}
