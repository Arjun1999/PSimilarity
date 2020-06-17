#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i,n;
    int sum=0;
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&b[i]);
        sum+=b[i];
    }
    printf("%d\n",sum);
    return 0;
}
