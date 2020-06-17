#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum=0,i=0,m=0,k[10000];
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {   
        scanf("%d",&k[i]);
        sum=sum+k[i];
    }
    printf("%d",sum);
    return 0;
}
