#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int n,a,sum=0;
   scanf("%d",&n);
    while(n--)
        {   scanf("%d",&a);
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}
