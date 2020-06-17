#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,sum=0,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&s);
        sum+=s;
    }
    printf("%d\n",sum);
    return 0;
}
