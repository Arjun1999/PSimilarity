#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,t,sum=0;
    scanf("%d",&t);
    int a[t];
    for (i=0;i<t;i++)
        {
        scanf("%d",&a[i]);
       sum = sum + a[i];   
    }
    printf("%d",sum);
    return 0;
}
