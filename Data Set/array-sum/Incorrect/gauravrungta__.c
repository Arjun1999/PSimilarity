#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,sum=0,x;
    printf("enter the num\n");
    scanf("%d",&n);
    for(;n;n--)
        {
        scanf("%d",&x);
        sum=sum+x;
        
    }
    printf("\n%d",sum);
    return 0;
}
