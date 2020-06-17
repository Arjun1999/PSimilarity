#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t,i,sum=0,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
        {
        scanf("%d",&n);
        sum+=n;
        
    }
    printf("%d",sum);
    return 0;
}
