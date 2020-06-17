#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int a,sum=0,n,i;
    scanf("%d",&n);
    while(n!=0)
        {
        scanf("%d",&a);
        sum+=a;
        n--;
    }
    printf("%d",sum);
    return 0;
}
