#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;
    long long int sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){        
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){        
     sum=sum+arr[i];
    }
    printf("%lld",sum);
    return 0;
}
