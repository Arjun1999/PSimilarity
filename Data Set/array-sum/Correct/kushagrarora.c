#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

 int n,sum=0,a[1000];
    scanf("%d",&n);
    while(n!=0)
        {
        scanf("%d",&a[n]);
        sum+=a[n];
        n--;
    }
        printf("%d",sum);
    return 0;
}
