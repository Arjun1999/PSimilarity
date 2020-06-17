#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,sum=0,i;
    scanf("%d\n",&a);
    int ar[a];
    for(i=0;i<a;i++)
        {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    printf("%d",sum);
    return 0;
}
