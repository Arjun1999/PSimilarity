#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0,i=0;
    int a[1000];
    scanf("%d",&n);
    while(i<n)
        {
        scanf("%d",&a[i]);
    sum=sum+a[i++];
    }
    printf("%d",sum);
    
    return 0;
}
