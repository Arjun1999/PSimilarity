#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int t,i,x,sum=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
        {
        scanf("%d",&x);
        sum=sum+x;
        
    }
    printf("%d",sum);
    return 0;
}
