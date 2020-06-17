#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum,i,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&temp);
        sum=sum+temp;
    }
    printf("%d\n",sum);
    return 0;
}
